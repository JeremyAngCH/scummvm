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

#include "kyra/resource/resource.h"


namespace Kyra {

#if defined(ENABLE_EOB) || defined(ENABLE_LOL)
const uint32 *StaticResource::loadRawDataBe32(int id, int &entries) {
	return (const uint32 *)getData(id, kRawDataBe32, entries);
}

bool StaticResource::loadRawDataBe32(Common::SeekableReadStream &stream, void *&ptr, int &size) {
	size = stream.size() >> 2;

	uint32 *r = new uint32[size];

	for (int i = 0; i < size; i++)
		r[i] = stream.readUint32BE();

	ptr = r;
	return true;
}

void StaticResource::freeRawDataBe32(void *&ptr, int &size) {
	uint32 *data = (uint32 *)ptr;
	delete[] data;
	ptr = 0;
	size = 0;
}

const uint8 KyraRpgEngine::_dropItemDirIndex[] = { 0, 1, 2, 3, 1, 3, 0, 2, 3, 2, 1, 0, 2, 0, 3, 1 };

const uint16 KyraRpgEngine::_vmpOffsetsDefault[9] = { 102, 97, 129, 117, 81, 159, 45, 239, 0 };

const uint16 KyraRpgEngine::_vmpOffsetsSegaCD[9] = { 0, 15, 20, 50, 62, 78, 158, 194, 386 };

const uint16 KyraRpgEngine::_dlgButtonPosX_Def[14] = { 59, 166, 4, 112, 220, 4, 112, 220, 4, 112, 220, 4, 112, 220 };

const uint8 KyraRpgEngine::_dlgButtonPosY_Def[14] = { 0, 0, 0, 0, 0, 12, 12, 12, 24, 24, 24, 36, 36, 36 };

void KyraRpgEngine::initStaticResource() {
	int temp;
	_dscShapeX = (const int16 *)_staticres->loadRawDataBe16(kRpgCommonDscX, temp);
	_dscShapeIndex = (const int8 *)_staticres->loadRawData(kRpgCommonDscShapeIndex, temp);
	_dscTileIndex = _staticres->loadRawData(kRpgCommonDscTileIndex, temp);
	_dscDim1 = (const int8 *)_staticres->loadRawData(kRpgCommonDscDimData1, temp);
	_dscDim2 = (const int8 *)_staticres->loadRawData(kRpgCommonDscDimData2, temp);
	_dscDoorScaleOffs = _staticres->loadRawData(kRpgCommonDscDoorScaleOffs, temp);
	_dscBlockMap = _staticres->loadRawData(kRpgCommonDscBlockMap, temp);
	_dscBlockIndex = (const int8 *)_staticres->loadRawData(kRpgCommonDscBlockIndex, temp);
	_dscDimMap = _staticres->loadRawData(kRpgCommonDscDimMap, temp);
	_dscDoorShpIndex = _staticres->loadRawData(kRpgCommonDscDoorShapeIndex, _dscDoorShpIndexSize);
	_dscDoorY2 = _staticres->loadRawData(kRpgCommonDscDoorY2, temp);
	_dscDoorFrameY1 = _staticres->loadRawData(kRpgCommonDscDoorFrameY1, temp);
	_dscDoorFrameY2 = _staticres->loadRawData(kRpgCommonDscDoorFrameY2, temp);
	_dscDoorFrameIndex1 = _staticres->loadRawData(kRpgCommonDscDoorFrameIndex1, temp);
	_dscDoorFrameIndex2 = _staticres->loadRawData(kRpgCommonDscDoorFrameIndex2, temp);
	_moreStrings = _staticres->loadStrings(kRpgCommonMoreStrings, temp);
}

#endif // (ENABLE_EOB || ENABLE_LOL)

} // End of namespace Kyra
