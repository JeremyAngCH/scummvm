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

#ifndef PLAYGROUND3D_GFX_OPENGL_SHADERS_H
#define PLAYGROUND3D_GFX_OPENGL_SHADERS_H

#include "common/rect.h"

#include "math/rect2d.h"

#include "graphics/opengl/shader.h"
#include "graphics/opengl/system_headers.h"

#include "engines/playground3d/gfx.h"

namespace Playground3d {

class ShaderRenderer : public Renderer {
public:
	ShaderRenderer(OSystem *_system);
	virtual ~ShaderRenderer();

	void init() override;
	void deinit() override;

	void clear(const Math::Vector4d &clearColor) override;
	void loadTextureRGBA(Graphics::Surface *texture) override;
	void loadTextureRGB(Graphics::Surface *texture) override;
	void loadTextureRGB565(Graphics::Surface *texture) override;
	void loadTextureRGBA5551(Graphics::Surface *texture) override;
	void loadTextureRGBA4444(Graphics::Surface *texture) override;

	void setupViewport(int x, int y, int width, int height) override;
	void drawCube(const Math::Vector3d &pos, const Math::Vector3d &roll) override;
	void drawPolyOffsetTest(const Math::Vector3d &pos, const Math::Vector3d &roll) override;
	void dimRegionInOut(float fade) override;
	void drawInViewport() override;
	void drawRgbaTexture() override;

private:
	OpenGL::ShaderGL *_cubeShader;
	OpenGL::ShaderGL *_fadeShader;
	OpenGL::ShaderGL *_bitmapShader;

	GLuint _cubeVBO;
	GLuint _fadeVBO;
	GLuint _bitmapVBO;

	Common::Rect _currentViewport;
	GLuint _textureRgbaId[5];
	GLuint _textureRgbId[5];
	GLuint _textureRgb565Id[2];
	GLuint _textureRgba5551Id[2];
	GLuint _textureRgba4444Id[2];
};

} // End of namespace Playground3d

#endif // PLAYGROUND3D_GFX_OPENGL_SHADERS_H
