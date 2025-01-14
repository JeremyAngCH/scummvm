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

#include "common/scummsys.h"

#if defined(DYNAMIC_MODULES) && defined(__WII__)

#include <malloc.h>
#include <ogc/cache.h>

#include "backends/plugins/wii/wii-provider.h"
#include "backends/plugins/elf/ppc-loader.h"

class WiiDLObject final : public PPCDLObject {
protected:
	void flushDataCache(void *ptr, uint32 len) const override {
		DCFlushRange(ptr, len);
		ICInvalidateRange(ptr, len);
	}
};

Plugin *WiiPluginProvider::createPlugin(const Common::FSNode &node) const {
	return new TemplatedELFPlugin<WiiDLObject>(node.getPath());
}

#endif // defined(DYNAMIC_MODULES) && defined(__WII__)
