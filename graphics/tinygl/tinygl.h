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

#ifndef GRAPHICS_TINYGL_H
#define GRAPHICS_TINYGL_H

#include "graphics/pixelformat.h"
#include "graphics/surface.h"
#include "graphics/tinygl/gl.h"
#include "graphics/tinygl/zblit_public.h"

namespace TinyGL {

void createContext(int screenW, int screenH, Graphics::PixelFormat pixelFormat, int textureSize, bool enableStencilBuffer, bool dirtyRectsEnable = true);
void destroyContext();
void presentBuffer();
void presentBuffer(Common::List<Common::Rect> &dirtyAreas);
void getSurfaceRef(Graphics::Surface &surface);
Graphics::Surface *copyToBuffer(const Graphics::PixelFormat &dstFormat);

} // end of namespace TinyGL

#endif
