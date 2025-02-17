/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

// Disable symbol overrides so that we can use system headers.
#define FORBIDDEN_SYMBOL_ALLOW_ALL

#include <unistd.h>
#include <string.h>

#include <sys/time.h>
#include <QuartzCore/QuartzCore.h>

#include "common/scummsys.h"
#include "common/util.h"
#include "common/rect.h"
#include "common/file.h"
#include "common/fs.h"
#include "common/config-manager.h"
#include "common/translation.h"

#include "base/main.h"

#include "engines/engine.h"
#include "engines/metaengine.h"

#include "gui/gui-manager.h"

#include "backends/saves/default/default-saves.h"
#include "backends/timer/default/default-timer.h"
#include "backends/mutex/pthread/pthread-mutex.h"
#include "backends/fs/chroot/chroot-fs-factory.h"
#include "backends/fs/posix/posix-fs.h"
#include "audio/mixer.h"
#include "audio/mixer_intern.h"

#include "backends/platform/ios7/ios7_osys_main.h"


AQCallbackStruct OSystem_iOS7::s_AudioQueue;
SoundProc OSystem_iOS7::s_soundCallback = NULL;
void *OSystem_iOS7::s_soundParam = NULL;

#ifdef IPHONE_SANDBOXED
class SandboxedSaveFileManager : public DefaultSaveFileManager {
	Common::String _sandboxRootPath;
public:

	SandboxedSaveFileManager(Common::String sandboxRootPath, Common::String defaultSavepath)
			: DefaultSaveFileManager(defaultSavepath), _sandboxRootPath(sandboxRootPath) {
	}

	bool removeSavefile(const Common::String &filename) override {
		Common::String chrootedFile = getSavePath() + "/" + filename;
		Common::String realFilePath = _sandboxRootPath + chrootedFile;

		if (remove(realFilePath.c_str()) != 0) {
			if (errno == EACCES)
				setError(Common::kWritePermissionDenied, "Search or write permission denied: "+chrootedFile);

			if (errno == ENOENT)
				setError(Common::kPathDoesNotExist, "removeSavefile: '"+chrootedFile+"' does not exist or path is invalid");
			return false;
		} else {
			return true;
		}
	}
};
#endif

OSystem_iOS7::OSystem_iOS7() :
	_mixer(NULL), _lastMouseTap(0), _queuedEventTime(0),
	_mouseNeedTextureUpdate(false), _secondaryTapped(false), _lastSecondaryTap(0),
	_screenOrientation(kScreenOrientationFlippedLandscape), _mouseClickAndDragEnabled(false),
	_gestureStartX(-1), _gestureStartY(-1), _fullScreenIsDirty(false), _fullScreenOverlayIsDirty(false),
	_mouseDirty(false), _timeSuspended(0), _lastDragPosX(-1), _lastDragPosY(-1), _screenChangeCount(0),
	_mouseCursorPaletteEnabled(false), _gfxTransactionError(kTransactionSuccess) {
	_queuedInputEvent.type = Common::EVENT_INVALID;
	_touchpadModeEnabled = !iOS7_isBigDevice();
#ifdef IPHONE_SANDBOXED
	_chrootBasePath = iOS7_getDocumentsDir();
	_fsFactory = new ChRootFilesystemFactory(_chrootBasePath);
#else
	_fsFactory = new POSIXFilesystemFactory();
#endif
	initVideoContext();

	memset(_gamePalette, 0, sizeof(_gamePalette));
	memset(_gamePaletteRGBA5551, 0, sizeof(_gamePaletteRGBA5551));
	memset(_mouseCursorPalette, 0, sizeof(_mouseCursorPalette));
}

OSystem_iOS7::~OSystem_iOS7() {
	AudioQueueDispose(s_AudioQueue.queue, true);

	delete _mixer;
	// Prevent accidental freeing of the screen texture here. This needs to be
	// checked since we might use the screen texture as framebuffer in the case
	// of hi-color games for example. Otherwise this can lead to a double free.
	if (_framebuffer.getPixels() != _videoContext->screenTexture.getPixels())
		_framebuffer.free();
	_mouseBuffer.free();
}

bool OSystem_iOS7::touchpadModeEnabled() const {
	return _touchpadModeEnabled;
}

int OSystem_iOS7::timerHandler(int t) {
	DefaultTimerManager *tm = (DefaultTimerManager *)g_system->getTimerManager();
	tm->handler();
	return t;
}

void OSystem_iOS7::initBackend() {
#ifdef IPHONE_SANDBOXED
	_savefileManager = new SandboxedSaveFileManager(_chrootBasePath, "/Savegames");
#else
	_savefileManager = new DefaultSaveFileManager(SCUMMVM_SAVE_PATH);
#endif

	_timerManager = new DefaultTimerManager();

	_startTime = CACurrentMediaTime();

	setupMixer();

	setTimerCallback(&OSystem_iOS7::timerHandler, 10);

	EventsBaseBackend::initBackend();
}

bool OSystem_iOS7::hasFeature(Feature f) {
	switch (f) {
	case kFeatureCursorPalette:
	case kFeatureFilteringMode:
	case kFeatureVirtualKeyboard:
	case kFeatureClipboardSupport:
	case kFeatureOpenUrl:
	case kFeatureNoQuit:
		return true;

	default:
		return false;
	}
}

void OSystem_iOS7::setFeatureState(Feature f, bool enable) {
	switch (f) {
	case kFeatureCursorPalette:
		if (_mouseCursorPaletteEnabled != enable) {
			_mouseNeedTextureUpdate = true;
			_mouseDirty = true;
			_mouseCursorPaletteEnabled = enable;
		}
		break;
	case kFeatureFilteringMode:
		_videoContext->filtering = enable;
		break;
	case kFeatureAspectRatioCorrection:
		_videoContext->asprectRatioCorrection = enable;
		break;
	case kFeatureVirtualKeyboard:
		setShowKeyboard(enable);
		break;

	default:
		break;
	}
}

bool OSystem_iOS7::getFeatureState(Feature f) {
	switch (f) {
	case kFeatureCursorPalette:
		return _mouseCursorPaletteEnabled;
	case kFeatureFilteringMode:
		return _videoContext->filtering;
	case kFeatureAspectRatioCorrection:
		return _videoContext->asprectRatioCorrection;
	case kFeatureVirtualKeyboard:
		return isKeyboardShown();

	default:
		return false;
	}
}

void OSystem_iOS7::suspendLoop() {
	bool done = false;
	uint32 startTime = getMillis();

	PauseToken pt;
	if (g_engine)
		pt = g_engine->pauseEngine();

	// We also need to stop the audio queue and restart it later in case there
	// is an audio interruption that render it invalid.
	stopSoundsystem();

	InternalEvent event;
	while (!done) {
		if (iOS7_fetchEvent(&event)) {
			if (event.type == kInputApplicationResumed)
				done = true;
			else if (event.type == kInputApplicationSaveState)
				handleEvent_applicationSaveState();
		}
		usleep(100000);
	}

	startSoundsystem();

	_timeSuspended += getMillis() - startTime;
}

void OSystem_iOS7::saveState() {
	// Clear any previous restore state to avoid having and obsolete one if we don't save it again below.
	clearState();

	// If there is an engine running and it accepts autosave, do an autosave and add the current
	// running target to the config file.
	if (g_engine && g_engine->hasFeature(Engine::kSupportsSavingDuringRuntime) && g_engine->canSaveAutosaveCurrently()) {
		Common::String targetName(ConfMan.getActiveDomainName());
		int saveSlot = g_engine->getAutosaveSlot();
		// Make sure we do not overwrite a user save
		SaveStateDescriptor desc = g_engine->getMetaEngine()->querySaveMetaInfos(targetName.c_str(), saveSlot);
		if (desc.getSaveSlot() != -1 && !desc.isAutosave())
			return;

		// Do the auto-save, and if successful store this it in the config
		if (g_engine->saveGameState(saveSlot, _("Autosave"), true).getCode() == Common::kNoError) {
			ConfMan.set("restore_target", targetName, Common::ConfigManager::kApplicationDomain);
			ConfMan.setInt("restore_slot", saveSlot, Common::ConfigManager::kApplicationDomain);
			ConfMan.flushToDisk();
		}
	}
}

void OSystem_iOS7::restoreState() {
	Common::String target;
	int slot = -1;
	if (ConfMan.hasKey("restore_target", Common::ConfigManager::kApplicationDomain) &&
		ConfMan.hasKey("restore_slot", Common::ConfigManager::kApplicationDomain)) {
		target = ConfMan.get("restore_target", Common::ConfigManager::kApplicationDomain);
		slot = ConfMan.getInt("restore_slot", Common::ConfigManager::kApplicationDomain);
		clearState();
	}

	// If the g_engine is still running (i.e. the application was not terminated) we don't need to do anything.
	if (g_engine)
		return;

	if (!target.empty() && slot != -1) {
		ConfMan.setInt("save_slot", slot, Common::ConfigManager::kTransientDomain);
		ConfMan.setActiveDomain(target);
		if (GUI::GuiManager::hasInstance())
			g_gui.exitLoop();
	}
}

void OSystem_iOS7::clearState() {
	if (ConfMan.hasKey("restore_target", Common::ConfigManager::kApplicationDomain) &&
	ConfMan.hasKey("restore_slot", Common::ConfigManager::kApplicationDomain)) {
		ConfMan.removeKey("restore_target", Common::ConfigManager::kApplicationDomain);
		ConfMan.removeKey("restore_slot", Common::ConfigManager::kApplicationDomain);
		ConfMan.flushToDisk();
	}
}

uint32 OSystem_iOS7::getMillis(bool skipRecord) {
	CFTimeInterval timeInSeconds = CACurrentMediaTime();
	return (uint32) ((timeInSeconds - _startTime) * 1000.0) - _timeSuspended;
}

void OSystem_iOS7::delayMillis(uint msecs) {
	//printf("delayMillis(%d)\n", msecs);
	usleep(msecs * 1000);
}


void OSystem_iOS7::setTimerCallback(TimerProc callback, int interval) {
	//printf("setTimerCallback()\n");

	if (callback != NULL) {
		_timerCallbackTimer = interval;
		_timerCallbackNext = getMillis() + interval;
		_timerCallback = callback;
	} else
		_timerCallback = NULL;
}

Common::MutexInternal *OSystem_iOS7::createMutex() {
	return createPthreadMutexInternal();
}

void OSystem_iOS7::quit() {
}

void OSystem_iOS7::getTimeAndDate(TimeDate &td, bool skipRecord) const {
	time_t curTime = time(0);
	struct tm t = *localtime(&curTime);
	td.tm_sec = t.tm_sec;
	td.tm_min = t.tm_min;
	td.tm_hour = t.tm_hour;
	td.tm_mday = t.tm_mday;
	td.tm_mon = t.tm_mon;
	td.tm_year = t.tm_year;
	td.tm_wday = t.tm_wday;
}

Audio::Mixer *OSystem_iOS7::getMixer() {
	assert(_mixer);
	return _mixer;
}

OSystem_iOS7 *OSystem_iOS7::sharedInstance() {
	static OSystem_iOS7 *instance = new OSystem_iOS7();
	return instance;
}

Common::String OSystem_iOS7::getDefaultConfigFileName() {
#ifdef IPHONE_SANDBOXED
	Common::String path = "/Preferences";
	return path;
#else
	return SCUMMVM_PREFS_PATH;
#endif
}

void OSystem_iOS7::addSysArchivesToSearchSet(Common::SearchSet &s, int priority) {
	// Get URL of the Resource directory of the .app bundle
	CFURLRef fileUrl = CFBundleCopyResourcesDirectoryURL(CFBundleGetMainBundle());
	if (fileUrl) {
		// Try to convert the URL to an absolute path
		UInt8 buf[MAXPATHLEN];
		if (CFURLGetFileSystemRepresentation(fileUrl, true, buf, sizeof(buf))) {
			// Success: Add it to the search path
			Common::String bundlePath((const char *)buf);
#ifdef IPHONE_SANDBOXED
			POSIXFilesystemNode *posixNode = new POSIXFilesystemNode(bundlePath);
			s.add("__IOS_BUNDLE__", new Common::FSDirectory(AbstractFSNode::makeFSNode(posixNode)), priority);
#else
			s.add("__IOS_BUNDLE__", new Common::FSDirectory(bundlePath), priority);
#endif
		}
		CFRelease(fileUrl);
	}
}

bool iOS7_touchpadModeEnabled() {
	OSystem_iOS7 *sys = dynamic_cast<OSystem_iOS7 *>(g_system);
	return sys && sys->touchpadModeEnabled();
}

void iOS7_buildSharedOSystemInstance() {
	OSystem_iOS7::sharedInstance();
}

void iOS7_main(int argc, char **argv) {

	//OSystem_iOS7::migrateApp();

	FILE *newfp = fopen("/var/mobile/.scummvm.log", "a");
	if (newfp != NULL) {
		fclose(stdout);
		fclose(stderr);
		*stdout = *newfp;
		*stderr = *newfp;
		setbuf(stdout, NULL);
		setbuf(stderr, NULL);

		//extern int gDebugLevel;
		//gDebugLevel = 10;
	}

#ifdef IPHONE_SANDBOXED
	chdir(iOS7_getDocumentsDir());
#else
	system("mkdir " SCUMMVM_ROOT_PATH);
	system("mkdir " SCUMMVM_SAVE_PATH);

	chdir("/var/mobile/");
#endif

	g_system = OSystem_iOS7::sharedInstance();
	assert(g_system);

	// Invoke the actual ScummVM main entry point:
	scummvm_main(argc, (const char *const *) argv);
	g_system->quit();       // TODO: Consider removing / replacing this!

	if (newfp != NULL) {
		//*stdout = NULL;
		//*stderr = NULL;
		fclose(newfp);
	}
}
