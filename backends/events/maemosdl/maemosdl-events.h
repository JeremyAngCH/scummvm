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

#if defined(MAEMO)

#if !defined(BACKEND_EVENTS_SDL_MAEMO_H) && !defined(DISABLE_DEFAULT_EVENTMANAGER)
#define BACKEND_EVENTS_SDL_MAEMO_H

#include "backends/events/sdl/sdl-events.h"

namespace Maemo {

/**
 * SDL events manager for Maemo
 */
class MaemoSdlEventSource final : public SdlEventSource {
public:
	MaemoSdlEventSource();

	bool toggleClickMode();
protected:
	bool remapKey(SDL_Event &ev, Common::Event &event) override;
	bool handleMouseButtonDown(SDL_Event &ev, Common::Event &event) override;
	bool handleMouseButtonUp(SDL_Event &ev, Common::Event &event) override;

	bool _clickEnabled;
};

class MaemoSdlEventObserver final : public Common::EventObserver {
public:
	MaemoSdlEventObserver(MaemoSdlEventSource *eventSource);

	bool notifyEvent(const Common::Event &event) override;
private:
	MaemoSdlEventSource *_eventSource;
};

} // namespace Maemo

#endif // include guard

#endif // if defined(MAEMO)
