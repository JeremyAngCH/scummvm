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

#include "audio/musicplugin.h"
#include "common/translation.h"
#include "common/error.h"
#include "common/system.h"


class TownsEmuMusicPlugin : public MusicPluginObject {
public:
	const char *getName() const override {
		return _s("FM-Towns Audio");
	}

	const char *getId() const override {
		return "towns";
	}

	MusicDevices getDevices() const override;
	Common::Error createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle = 0) const override;
};

MusicDevices TownsEmuMusicPlugin::getDevices() const {
	MusicDevices devices;
	devices.push_back(MusicDevice(this, "", MT_TOWNS));
	return devices;
}

Common::Error TownsEmuMusicPlugin::createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle) const {
	*mididriver = nullptr;
	return Common::kUnknownError;
}

class PC98EmuMusicPlugin : public MusicPluginObject {
public:
	const char *getName() const override {
		return _s("PC-98 Audio");
	}

	const char *getId() const override {
		return "pc98";
	}

	MusicDevices getDevices() const override;
	Common::Error createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle = 0) const override;
};

MusicDevices PC98EmuMusicPlugin::getDevices() const {
	MusicDevices devices;
	devices.push_back(MusicDevice(this, "", MT_PC98));
	return devices;
}

Common::Error PC98EmuMusicPlugin::createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle) const {
	*mididriver = nullptr;
	return Common::kUnknownError;
}

class SegaCDSoundPlugin : public MusicPluginObject {
public:
	const char *getName() const override {
		return _s("SegaCD Audio");
	}

	const char *getId() const override {
		return "segacd";
	}

	MusicDevices getDevices() const override;
	Common::Error createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle = 0) const override;
};

MusicDevices SegaCDSoundPlugin::getDevices() const {
	MusicDevices devices;
	devices.push_back(MusicDevice(this, "", MT_SEGACD));
	return devices;
}

Common::Error SegaCDSoundPlugin::createInstance(MidiDriver **mididriver, MidiDriver::DeviceHandle) const {
	*mididriver = nullptr;
	return Common::kUnknownError;
}

//#if PLUGIN_ENABLED_DYNAMIC(TOWNS)
	//REGISTER_PLUGIN_DYNAMIC(TOWNS, PLUGIN_TYPE_MUSIC, TownsEmuMusicPlugin);
	//REGISTER_PLUGIN_DYNAMIC(PC98, PLUGIN_TYPE_MUSIC, PC98EmuMusicPlugin);
//#else
	REGISTER_PLUGIN_STATIC(TOWNS, PLUGIN_TYPE_MUSIC, TownsEmuMusicPlugin);
	REGISTER_PLUGIN_STATIC(PC98, PLUGIN_TYPE_MUSIC, PC98EmuMusicPlugin);
	REGISTER_PLUGIN_STATIC(SEGACD, PLUGIN_TYPE_MUSIC, SegaCDSoundPlugin);
//#endif
