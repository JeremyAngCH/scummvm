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

#ifndef HYPNO_LIBFILE_H
#define HYPNO_LIBFILE_H

#include "common/archive.h"
#include "common/array.h"
#include "common/file.h"
#include "common/memstream.h"
#include "common/stream.h"

namespace Hypno {

typedef Common::Array<byte> ByteArray;
typedef struct FileEntry {
	Common::String name;
	ByteArray data;
} FileEntry;

class LibFile : public Common::Archive {
public:
	LibFile();
	~LibFile() override;

	bool open(const Common::String &prefix, const Common::String &filename, bool encrypted);
	void close();

	// Common::Archive API implementation
	bool hasFile(const Common::Path &path) const override;
	int listMembers(Common::ArchiveMemberList &list) const override;
	const Common::ArchiveMemberPtr getMember(const Common::Path &path) const override;
	Common::SeekableReadStream *createReadStreamForMember(const Common::Path &path) const override;

private:
	Common::String _prefix;
	Common::Array<FileEntry> _fileEntries;
	const FileEntry *getEntry(const Common::Path &path) const;
};

} // End of namespace Hypno

#endif

