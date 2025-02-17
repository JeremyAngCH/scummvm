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


#include "scumm/charset.h"
#include "scumm/scumm.h"

namespace Scumm {

// English Zak font
static const byte englishCharsetDataV2[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x03, 0x06, 0x0C, 0x18, 0x3E, 0x03, 0x00,
	0x80, 0xC0, 0x60, 0x30, 0x18, 0x7C, 0xC0, 0x00,
	0x00, 0x03, 0x3E, 0x18, 0x0C, 0x06, 0x03, 0x01,
	0x00, 0xC0, 0x7C, 0x18, 0x30, 0x60, 0xC0, 0x80,
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x07, 0x07, 0x0F, 0x1F, 0x7F,
	0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0,
	0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07,
	0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18,
	0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00,
	0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xC0, 0xE0, 0x30, 0x18, 0x18,
	0x18, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x18, 0x3C, 0x66, 0xC3, 0xC3, 0x66, 0x3C, 0x18,
	0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x7E, 0x3C, 0x18,
	0x18, 0x66, 0xC3, 0xDB, 0xDB, 0xC3, 0x66, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00,
	0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x66, 0x66, 0xFF, 0x66, 0xFF, 0x66, 0x66, 0x00,
	0x18, 0x3E, 0x58, 0x3C, 0x1A, 0x7C, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x49, 0x00,
	0x3C, 0x66, 0x3C, 0x38, 0x67, 0x66, 0x3F, 0x00,
	0x06, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0C, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00,
	0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00,
	0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30,
	0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7E, 0x00,
	0x3C, 0x66, 0x06, 0x0C, 0x30, 0x60, 0x7E, 0x00,
	0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00,
	0x06, 0x0E, 0x1E, 0x66, 0x7F, 0x06, 0x06, 0x00,
	0x7E, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C, 0x00,
	0x3C, 0x66, 0x60, 0x7C, 0x66, 0x66, 0x3C, 0x00,
	0x7E, 0x66, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x00,
	0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00,
	0x3C, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30,
	0x0E, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0E, 0x00,
	0x7C, 0x82, 0xBA, 0xA2, 0xBA, 0x82, 0x7C, 0x00,
	0x70, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x70, 0x00,
	0x3C, 0x66, 0x06, 0x0C, 0x18, 0x00, 0x18, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x18, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00,
	0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x00,
	0x78, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00,
	0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7E, 0x00,
	0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00,
	0x3C, 0x66, 0x60, 0x6E, 0x66, 0x66, 0x3C, 0x00,
	0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00,
	0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00,
	0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x6C, 0x38, 0x00,
	0x66, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0x66, 0x00,
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E, 0x00,
	0x63, 0x77, 0x7F, 0x6B, 0x63, 0x63, 0x63, 0x00,
	0x66, 0x76, 0x7E, 0x7E, 0x6E, 0x66, 0x66, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x0E, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x78, 0x6C, 0x66, 0x00,
	0x3C, 0x66, 0x60, 0x3C, 0x06, 0x66, 0x3C, 0x00,
	0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00,
	0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00,
	0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x00,
	0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x00,
	0x7E, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x7E, 0x00,
	0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00,
	0x0C, 0x12, 0x30, 0x7C, 0x30, 0x62, 0xFC, 0x00,
	0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 0xDB, 0x00,
	0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00,
	0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00,
	0x00, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x00,
	0x00, 0x00, 0x3C, 0x60, 0x60, 0x60, 0x3C, 0x00,
	0x00, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3E, 0x00,
	0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00,
	0x00, 0x0E, 0x18, 0x3E, 0x18, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x7C,
	0x00, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x00,
	0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3C, 0x00,
	0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3C,
	0x00, 0x60, 0x60, 0x6C, 0x78, 0x6C, 0x66, 0x00,
	0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00,
	0x00, 0x00, 0x66, 0x7F, 0x7F, 0x6B, 0x63, 0x00,
	0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00,
	0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60,
	0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06,
	0x00, 0x00, 0x7C, 0x66, 0x60, 0x60, 0x60, 0x00,
	0x00, 0x00, 0x3E, 0x60, 0x3C, 0x06, 0x7C, 0x00,
	0x00, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x0E, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00,
	0x00, 0x00, 0x63, 0x6B, 0x7F, 0x3E, 0x36, 0x00,
	0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x0C, 0x78,
	0x00, 0x00, 0x7E, 0x0C, 0x18, 0x30, 0x7E, 0x00,
	0x01, 0x03, 0x06, 0x6C, 0x78, 0x70, 0x60, 0x00,
	0x18, 0x3C, 0x7E, 0xFF, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0xFF, 0x7E, 0x3C, 0x18,
	0x10, 0x30, 0x70, 0xFF, 0xFF, 0x70, 0x30, 0x10,
	0x08, 0x0C, 0x0E, 0xFF, 0xFF, 0x0E, 0x0C, 0x08,
};

static const byte russianCharsetDataV2[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xc0, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7c,
	0x7c, 0x7e, 0x7f, 0x7e, 0x7e, 0x7e, 0x7e, 0x00,
	0x00, 0xfe, 0xfe, 0xfe, 0xfc, 0xfe, 0x7e, 0x3e,
	0x3e, 0x7e, 0xfe, 0x7e, 0x7e, 0x7e, 0x7e, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1c, 0x20, 0x20, 0x20, 0x1c, 0x00,
	0x04, 0x04, 0x3c, 0x44, 0x44, 0x44, 0x3c, 0x00,
	0x00, 0x00, 0x38, 0x44, 0x78, 0x40, 0x3c, 0x00,
	0x0c, 0x10, 0x38, 0x10, 0x10, 0x10, 0x10, 0x00,
	0x00, 0x00, 0x38, 0x44, 0x44, 0x3c, 0x04, 0x38,
	0x00, 0x00, 0x38, 0x04, 0x3c, 0x44, 0x3c, 0x00,
	0x40, 0x40, 0x78, 0x44, 0x44, 0x44, 0x78, 0x00,
	0x02, 0x02, 0x38, 0x40, 0x40, 0x40, 0x38, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x60, 0x00,
	0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66, 0x00,
	0x30, 0x7c, 0xc0, 0x78, 0x0c, 0xf8, 0x30, 0x00,
	0xc4, 0xcc, 0x18, 0x30, 0x60, 0xcc, 0x8c, 0x00,
	0x78, 0xcc, 0x78, 0x70, 0xce, 0xcc, 0x7e, 0x00,
	0x60, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x60, 0xc0, 0xc0, 0xc0, 0x60, 0x30, 0x00,
	0xc0, 0x60, 0x30, 0x30, 0x30, 0x60, 0xc0, 0x00,
	0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x00,
	0x66, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xc0,
	0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00,
	0x66, 0x66, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0x60, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00,
	0x78, 0xcc, 0x0c, 0x18, 0x60, 0xc0, 0xfc, 0x00,
	0x78, 0xcc, 0x0c, 0x38, 0x0c, 0xcc, 0x78, 0x00,
	0x0c, 0x1c, 0x2c, 0x4c, 0xfe, 0x0c, 0x0c, 0x00,
	0xfc, 0xc0, 0xf8, 0x0c, 0x0c, 0xcc, 0x78, 0x00,
	0x78, 0xcc, 0xc0, 0xf8, 0xcc, 0xcc, 0x78, 0x00,
	0xfc, 0xcc, 0x18, 0x30, 0x30, 0x30, 0x30, 0x00,
	0x78, 0xcc, 0xcc, 0x78, 0xcc, 0xcc, 0x78, 0x00,
	0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0xcc, 0x78, 0x00,
	0x00, 0x00, 0x60, 0x60, 0x00, 0x60, 0x60, 0x00,
	0x00, 0x00, 0x60, 0x60, 0x00, 0x60, 0x60, 0xc0,
	0x7c, 0xfe, 0xfc, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3f, 0x61, 0xcc, 0xd0, 0xd0, 0xcc, 0x61, 0x3f,
	0x78, 0xcc, 0x0c, 0x18, 0x30, 0x00, 0x30, 0x00,
	0x00, 0x00, 0x00, 0xf8, 0xf8, 0x00, 0x00, 0x00,
	0x30, 0x78, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00,
	0xf8, 0xcc, 0xcc, 0xf8, 0xcc, 0xcc, 0xf8, 0x00,
	0x78, 0xcc, 0xc0, 0xc0, 0xc0, 0xcc, 0x78, 0x00,
	0xf0, 0xd8, 0xcc, 0xcc, 0xcc, 0xd8, 0xf0, 0x00,
	0xfc, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xfc, 0x00,
	0xfc, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xc0, 0x00,
	0x78, 0xcc, 0xc0, 0xdc, 0xcc, 0xcc, 0x78, 0x00,
	0xcc, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00,
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
	0x18, 0x18, 0x18, 0x18, 0x18, 0xd8, 0x70, 0x00,
	0xcc, 0xd8, 0xf0, 0xe0, 0xf0, 0xd8, 0xcc, 0x00,
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0x00,
	0xc6, 0xee, 0xfe, 0xd6, 0xc6, 0xc6, 0xc6, 0x00,
	0xcc, 0xec, 0xfc, 0xfc, 0xdc, 0xcc, 0xcc, 0x00,
	0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0xf8, 0xcc, 0xcc, 0xf8, 0xc0, 0xc0, 0xc0, 0x00,
	0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x0c,
	0xf8, 0xcc, 0xcc, 0xf8, 0xf0, 0xd8, 0xcc, 0x00,
	0x78, 0xcc, 0xc0, 0x78, 0x0c, 0xcc, 0x78, 0x00,
	0xfc, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00,
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00,
	0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0xee, 0xc6, 0x00,
	0xcc, 0xcc, 0x78, 0x30, 0x78, 0xcc, 0xcc, 0x00,
	0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x30, 0x30, 0x00,
	0xfc, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0xfc, 0x00,
	0xcc, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x7c, 0x00,
	0xcc, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x7c, 0x00,
	0xe8, 0x4d, 0x4a, 0x48, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe,
	0xfe, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x7c, 0x00,
	0xc0, 0xc0, 0xf8, 0xcc, 0xcc, 0xcc, 0xf8, 0x00,
	0x00, 0x00, 0x78, 0xc0, 0xc0, 0xc0, 0x78, 0x00,
	0x0c, 0x0c, 0x7c, 0xcc, 0xcc, 0xcc, 0x7c, 0x00,
	0x00, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00,
	0x38, 0x60, 0xf8, 0x60, 0x60, 0x60, 0x60, 0x00,
	0x00, 0x00, 0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0x78,
	0xc0, 0xc0, 0xf8, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
	0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
	0x30, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0xe0,
	0xc0, 0xc0, 0xcc, 0xd8, 0xf0, 0xd8, 0xcc, 0x00,
	0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00,
	0x00, 0x00, 0xcc, 0xfe, 0xfe, 0xd6, 0xc6, 0x00,
	0x00, 0x00, 0xf8, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
	0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0x00, 0x00, 0xf8, 0xcc, 0xcc, 0xf8, 0xc0, 0xc0,
	0x00, 0x00, 0x7c, 0xcc, 0xcc, 0x7c, 0x0c, 0x0c,
	0x00, 0x00, 0xf8, 0xcc, 0xc0, 0xc0, 0xc0, 0x00,
	0x00, 0x00, 0x7c, 0xc0, 0x78, 0x0c, 0xf8, 0x00,
	0x30, 0x30, 0xfc, 0x30, 0x30, 0x30, 0x1c, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x7c, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00,
	0x00, 0x00, 0xc6, 0xd6, 0xfe, 0x7c, 0x6c, 0x00,
	0x00, 0x00, 0xcc, 0x78, 0x30, 0x78, 0xcc, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x7c, 0x18, 0x70,
	0x00, 0x00, 0xfc, 0x18, 0x30, 0x60, 0xfc, 0x00,
	0xcc, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0xcc, 0x30, 0x78, 0xcc, 0xfc, 0xcc, 0xcc, 0x00,
	0x84, 0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0x38, 0x6c, 0x6c, 0xf8, 0xcc, 0xcc, 0xf8, 0x80,
	0x08, 0x0c, 0x0e, 0xff, 0xff, 0x0e, 0x0c, 0x08,
	0x30, 0x78, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00,
	0xf8, 0xc0, 0xc0, 0xf8, 0xcc, 0xcc, 0xf8, 0x00,
	0xf8, 0xcc, 0xcc, 0xf8, 0xcc, 0xcc, 0xf8, 0x00,
	0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
	0x3c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0xfe, 0xc6,
	0xfc, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xfc, 0x00,
	0xd6, 0xd6, 0x7c, 0xd6, 0xd6, 0xd6, 0xd6, 0x00,
	0x78, 0x8c, 0x0c, 0x38, 0x0c, 0x8c, 0x78, 0x00,
	0xcc, 0xcc, 0xdc, 0xfc, 0xfc, 0xec, 0xcc, 0x00,
	0x30, 0xcc, 0xdc, 0xfc, 0xfc, 0xec, 0xcc, 0x00,
	0xcc, 0xd8, 0xf0, 0xe0, 0xf0, 0xd8, 0xcc, 0x00,
	0x3c, 0x6c, 0x6c, 0x6c, 0x6c, 0x6c, 0xcc, 0x00,
	0xc6, 0xee, 0xfe, 0xd6, 0xc6, 0xc6, 0xc6, 0x00,
	0xcc, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00,
	0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
	0xf8, 0xcc, 0xcc, 0xf8, 0xc0, 0xc0, 0xc0, 0x00,
	0x78, 0xcc, 0xc0, 0xc0, 0xc0, 0xcc, 0x78, 0x00,
	0xfc, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00,
	0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0xcc, 0x78, 0x00,
	0x78, 0xb4, 0xb4, 0xb4, 0x78, 0x30, 0x30, 0x00,
	0xcc, 0xcc, 0x78, 0x30, 0x78, 0xcc, 0xcc, 0x00,
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xfe, 0x06,
	0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0x0c, 0x0c, 0x00,
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xfe, 0x00,
	0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xfe, 0x06,
	0xe0, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x7c, 0x00,
	0xc6, 0xc6, 0xc6, 0xf6, 0xde, 0xde, 0xf6, 0x00,
	0xc0, 0xc0, 0xc0, 0xf8, 0xcc, 0xcc, 0xf8, 0x00,
	0x78, 0x8c, 0x0c, 0x3c, 0x0c, 0x8c, 0x78, 0x00,
	0xcc, 0xd6, 0xd6, 0xf6, 0xd6, 0xd6, 0xcc, 0x00,
	0x7c, 0xcc, 0xcc, 0x7c, 0x3c, 0x6c, 0xcc, 0x00,
	0x00, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x7c, 0x00,
	0x04, 0x78, 0xc0, 0xf8, 0xcc, 0xcc, 0x78, 0x00,
	0x00, 0x00, 0xf8, 0xcc, 0xf8, 0xcc, 0xf8, 0x00,
	0x00, 0x00, 0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
	0x00, 0x00, 0x3c, 0x6c, 0x6c, 0x6c, 0xfe, 0xc6,
	0x00, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00,
	0x00, 0x00, 0xd6, 0x7c, 0xd6, 0xd6, 0xd6, 0x00,
	0x00, 0x00, 0x78, 0x9c, 0x38, 0x9c, 0x78, 0x00,
	0x00, 0x00, 0xcc, 0xdc, 0xfc, 0xec, 0xcc, 0x00,
	0x10, 0x20, 0xcc, 0xdc, 0xfc, 0xec, 0xcc, 0x00,
	0x00, 0x00, 0xcc, 0xd8, 0xf0, 0xd8, 0xcc, 0x00,
	0x00, 0x00, 0x3c, 0x6c, 0x6c, 0x6c, 0xcc, 0x00,
	0x00, 0x00, 0xc6, 0xee, 0xfe, 0xd6, 0xc6, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0x00,
	0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00,
	0x00, 0x00, 0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf8, 0xcc, 0xcc, 0xf8, 0xc0, 0xc0,
	0x00, 0x00, 0x78, 0xc0, 0xc0, 0xc0, 0x78, 0x00,
	0x00, 0x00, 0xfc, 0x30, 0x30, 0x30, 0x30, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x7c, 0x18, 0x70,
	0x00, 0x00, 0x78, 0xb4, 0xb4, 0x78, 0x30, 0x30,
	0x00, 0x00, 0xcc, 0x78, 0x30, 0x78, 0xcc, 0x00,
	0x00, 0x00, 0xd8, 0xd8, 0xd8, 0xd8, 0xfc, 0x0c,
	0x00, 0x00, 0xd8, 0xd8, 0x78, 0x18, 0x18, 0x00,
	0x00, 0x00, 0xd6, 0xd6, 0xd6, 0xd6, 0xfe, 0x00,
	0x00, 0x00, 0xd6, 0xd6, 0xd6, 0xd6, 0xfe, 0x06,
	0x00, 0x00, 0xe0, 0x60, 0x7c, 0x66, 0x7c, 0x00,
	0x00, 0x00, 0xc6, 0xc6, 0xf6, 0xce, 0xf6, 0x00,
	0x00, 0x00, 0xc0, 0xc0, 0xf8, 0xcc, 0xf8, 0x00,
	0x00, 0x00, 0x78, 0x8c, 0x3c, 0x8c, 0x78, 0x00,
	0x00, 0x00, 0xcc, 0xd6, 0xf6, 0xd6, 0xcc, 0x00,
	0x00, 0x00, 0x7c, 0xcc, 0x7c, 0x3c, 0xec, 0x00,
	0x48, 0xfc, 0xc0, 0xf8, 0xc0, 0xc0, 0xfc, 0x00,
	0x48, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00
};

// These replacement character tables have been created using the
// make-charset-fontdata tool.

// German Zak font.
static const byte germanCharsetDataV2[] = {
	36, 0,
	37, 1,
	39, 2,
	61, 3,
	91, 4,
	92, 5,
	93, 6,
	123, 7,
	124, 8,
	125, 9,
	126, 10,
};

// German v0 MM.
static const byte germanCharsetDataV0[] = {
	36, 11,
	42, 12,
	43, 13,
	60, 4,
	62, 7,
	91, 5,
	93, 14,
	94, 15,
};

// French Zak font.
static const byte frenchCharsetDataV2[] = {
	36, 0,
	37, 1,
	39, 2,
	60, 16,
	61, 17,
	62, 18,
	91, 19,
	92, 20,
	93, 21,
	95, 22,
	123, 23,
	124, 24,
	125, 25,
	126, 26,
};

// Italian Zak font.
static const byte italianCharsetDataV2[] = {
	36, 0,
	37, 1,
	39, 2,
	60, 16,
	61, 27,
	62, 20,
	91, 19,
	92, 20,
	93, 21,
	95, 22,
	123, 28,
	124, 29,
	125, 25,
	126, 26,
};

// Spanish Zak font.
static const byte spanishCharsetDataV2[] = {
	36, 0,
	37, 1,
	39, 2,
	61, 3,
	91, 4,
	92, 5,
	93, 6,
	123, 7,
	124, 8,
	125, 9,
	126, 10,
};

// Russian MM font.
static const byte russCharsetDataV2[] = {
	60, 234,
	62, 158,
	65, 128,
	66, 129,
	67, 150,
	68, 132,
	69, 133,
	70, 148,
	71, 131,
	72, 149,
	73, 136,
	74, 137,
	75, 138,
	76, 139,
	77, 140,
	78, 141,
	79, 142,
	80, 143,
	81, 159,
	82, 144,
	83, 145,
	84, 146,
	85, 147,
	86, 134,
	87, 130,
	88, 156,
	89, 155,
	90, 135,
	91, 152,
	92, 157,
	93, 153,
	94, 151,
	96, 238,
	97, 160,
	98, 161,
	99, 230,
	100, 164,
	101, 165,
	102, 228,
	103, 163,
	104, 229,
	105, 168,
	106, 169,
	107, 170,
	108, 171,
	109, 172,
	110, 173,
	111, 174,
	112, 175,
	113, 239,
	114, 224,
	115, 225,
	116, 226,
	117, 227,
	118, 166,
	119, 162,
	120, 236,
	121, 235,
	122, 167,
	123, 232,
	124, 237,
	125, 233,
	126, 231,
};

// Special characters
static const byte specialCharsetData[] = {
	0x18, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x18, 0x00,
	0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00,
	0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0x82, 0xba, 0xa2, 0xa2, 0xba, 0x82, 0x7c,
	0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00,
	0x66, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00,
	0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00,
	0x66, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00,
	0x66, 0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x00,
	0x42, 0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00,
	0x1c, 0x36, 0x36, 0x7c, 0x66, 0x66, 0x7c, 0x40,
	0x66, 0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00,
	0x3c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x6c, 0x60,
	0x66, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00,
	0x66, 0x24, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00,
	0x00, 0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18,
	0x10, 0x08, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00,
	0x18, 0x24, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00,
	0x00, 0x00, 0x3c, 0x60, 0x60, 0x3c, 0x18, 0x38,
	0x08, 0x10, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00,
	0x10, 0x08, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00,
	0x18, 0x24, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00,
	0x00, 0x6c, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00,
	0x18, 0x24, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00,
	0x18, 0x24, 0x00, 0x3c, 0x66, 0x66, 0x3c, 0x00,
	0x10, 0x08, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00,
	0x18, 0x24, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00,
	0x08, 0x10, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00,
	0x10, 0x08, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00,
	0x10, 0x08, 0x00, 0x3c, 0x66, 0x66, 0x3c, 0x00,
};

CharsetRendererV2::CharsetRendererV2(ScummEngine *vm, Common::Language language)
	: CharsetRendererV3(vm) {

	_fontHeight = 8;
	_curId = 0;

	const byte *replacementMap = nullptr, *replacementData = nullptr;
	int replacementChars = 0;

	switch (language) {
	case Common::DE_DEU:
		if (_vm->_game.version == 0) {
			replacementMap = germanCharsetDataV0;
			replacementChars = sizeof(germanCharsetDataV0) / 2;
		} else {
			replacementMap = germanCharsetDataV2;
			replacementChars = sizeof(germanCharsetDataV2) / 2;
		}
		replacementData = specialCharsetData;
		break;
	case Common::FR_FRA:
		replacementMap = frenchCharsetDataV2;
		replacementChars = sizeof(frenchCharsetDataV2) / 2;
		replacementData = specialCharsetData;
		break;
	case Common::IT_ITA:
		replacementMap = italianCharsetDataV2;
		replacementChars = sizeof(italianCharsetDataV2) / 2;
		replacementData = specialCharsetData;
		break;
	case Common::ES_ESP:
		replacementMap = spanishCharsetDataV2;
		replacementChars = sizeof(spanishCharsetDataV2) / 2;
		replacementData = specialCharsetData;
		break;
	case Common::RU_RUS:
		if (((_vm->_game.id == GID_MANIAC) || (_vm->_game.id == GID_ZAK)) && (_vm->_game.version == 2)) {
			replacementMap = russCharsetDataV2;
			replacementChars = sizeof(russCharsetDataV2) / 2;
			replacementData = russianCharsetDataV2;
		} else {
			_fontPtr = russianCharsetDataV2;
		}
		break;
	default:
		_fontPtr = englishCharsetDataV2;
		break;
	}

	if (replacementMap && replacementData) {
		_fontPtr = new byte[sizeof(englishCharsetDataV2)];
		_deleteFontPtr = true;
		memcpy(const_cast<byte *>(_fontPtr), englishCharsetDataV2, sizeof(englishCharsetDataV2));

		for (int i = 0; i < replacementChars; i++) {
			int ch1 = replacementMap[2 * i];
			int ch2 = replacementMap[2 * i + 1];

			memcpy(const_cast<byte *>(_fontPtr) + 8 * ch1, replacementData + 8 * ch2, 8);
		}
	} else
		_deleteFontPtr = false;

#if 0
	// Decompress weird encoding in which the Zak executable contains the font.
	// I leave the code around in case we need to use it again (e.g. we might
	// have to include different fonts for french/spanish/russian/... version
	// of MM / Zak
	//
	int count = 0, len;
	byte b;
	const byte *data = spanishCharsetDataV2;
	const int size = sizeof(spanishCharsetDataV2);
	for (int offset = 0; offset < size; offset++) {
		if (data[offset+1] == 0x00 && data[offset+2] == 0xB2 &&
			data[offset+5] == 0x00 && data[offset+6] == 0xB0) {
			b = data[offset+3];
			len = data[offset+4];
			while (len--) {
				debugN("0x%02x, ", b);
				count++;
				if (count % 8 == 0)
					debugN("\n");
			}
			offset += 6;
		} else {
			debugN("0x%02x, ", data[offset]);
			count++;
			if (count % 8 == 0)
				debugN("\n");
		}
	}
	debugN("\n");
	_vm->quitGame();
#endif
}

CharsetRendererV2::~CharsetRendererV2() {
	if (_deleteFontPtr)
		delete[] _fontPtr;
}

} // End of namespace Scumm
