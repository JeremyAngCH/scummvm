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

#include "base/plugins.h"

#include "engines/advancedDetector.h"

#include "common/file.h"
#include "common/config-manager.h"

#include "director/director.h"
#include "director/detection.h"

namespace Director {

DirectorGameGID DirectorEngine::getGameGID() const {
	return _gameDescription->gameGID;
}

const char *DirectorEngine::getGameId() const {
	return _gameDescription->desc.gameId;
}

Common::Platform DirectorEngine::getPlatform() const {
	return _gameDescription->desc.platform;
}

uint16 DirectorEngine::getDescriptionVersion() const {
	return _gameDescription->version;
}

Common::Language DirectorEngine::getLanguage() const {
	return _gameDescription->desc.language;
}

const char *DirectorEngine::getExtra() {
	return _gameDescription->desc.extra;
}

bool DirectorEngine::hasFeature(EngineFeature f) const {
	return false;
		//(f == kSupportsReturnToLauncher);
}

} // End of Namespace Director

class DirectorMetaEngine : public AdvancedMetaEngine {
public:
	const char *getName() const override {
		return "director";
	}

	Common::Error createInstance(OSystem *syst, Engine **engine, const ADGameDescription *desc) const override;
};

Common::Error DirectorMetaEngine::createInstance(OSystem *syst, Engine **engine, const ADGameDescription *desc) const {
	Common::StringArray dirs = AdvancedMetaEngineDetection::getPathsFromEntry(desc);
	Common::FSNode gameDataDir = Common::FSNode(ConfMan.get("path"));

	for (auto dir = dirs.begin(); dir != dirs.end(); ++dir)
		SearchMan.addSubDirectoryMatching(gameDataDir, *dir);

	*engine = new Director::DirectorEngine(syst, (const Director::DirectorGameDescription *)desc);
	return Common::kNoError;
}

#if PLUGIN_ENABLED_DYNAMIC(DIRECTOR)
	REGISTER_PLUGIN_DYNAMIC(DIRECTOR, PLUGIN_TYPE_ENGINE, DirectorMetaEngine);
#else
	REGISTER_PLUGIN_STATIC(DIRECTOR, PLUGIN_TYPE_ENGINE, DirectorMetaEngine);
#endif
