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

#include "ultima/ultima8/misc/util.h"
#include "ultima/ultima8/misc/istring.h"

namespace Ultima {
namespace Ultima8 {

template<class T> void StringToArgv(const T &args, Common::Array<T> &argv) {
	// Clear the vector
	argv.clear();

	bool quoted = false;
	typename T::const_iterator it;
	int ch;
	T arg;

	for (it = args.begin(); it != args.end(); ++it) {
		ch = *it;

		// Toggle quoted string handling
		if (ch == '\"') {
			quoted = !quoted;
			continue;
		}

		// Handle \\, \", \', \n, \r, \t
		if (ch == '\\') {
			typename T::const_iterator next = it + 1;
			if (next != args.end()) {
				if (*next == '\\' || *next == '\"' || *next == '\'') {
					ch = *next;
					++it;
				} else if (*next == 'n') {
					ch = '\n';
					++it;
				} else if (*next == 'r') {
					ch = '\r';
					++it;
				} else if (*next == 't') {
					ch = '\t';
					++it;
				} else if (*next == ' ') {
					ch = ' ';
					++it;
				}
			}
		}

		// A space, a tab, line feed, carriage return
		if (!quoted && (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r')) {
			// If we are not empty then we are at the end of the arg
			// otherwise we will ignore the extra chars
			if (!arg.empty()) {
				argv.push_back(arg);
				arg.clear();
			}

			continue;
		}

		// Add the charater to the string
		arg += ch;
	}

	// Push any arg if it's left
	if (!arg.empty()) argv.push_back(arg);
}

template void StringToArgv<Common::String>(const Common::String &args, Common::Array<Common::String> &argv);

template<class T> void TrimSpaces(T &str) {
	if (str.empty()) return;

	typename T::size_type pos1 = str.findFirstNotOf(' ');
	if (pos1 == T::npos) {
		str = "";
		return;
	}

	typename T::size_type pos2 = str.findLastNotOf(' ');
	str = str.substr(pos1, pos2 - pos1 + 1);
}

template void TrimSpaces<Std::string>(Std::string &str);
template void TrimSpaces<istring>(istring &str);


template<class T> void TabsToSpaces(T &str, unsigned int n) {
	T repl(n, ' ');
	typename T::size_type p;
	while ((p = str.find('\t')) != T::npos)
		str.replace(p, 1, repl);
}

template void TabsToSpaces<Std::string>(Std::string &str, unsigned int n);
template void TabsToSpaces<istring>(istring &str, unsigned int n);


template<class T> void SplitString(const T &args, char sep,
								   Std::vector<T> &argv) {
	// Clear the vector
	argv.clear();

	if (args.empty()) return;

	typename T::size_type pos, start;
	start = 0;
	while (start != T::npos) {
		pos = args.find(sep, start);
		if (pos == T::npos) {
			argv.push_back(args.substr(start));
			start = pos;
		} else {
			argv.push_back(args.substr(start, pos - start));
			start = pos + 1;
		}
	}
}


template void SplitString<Std::string>(const Std::string &args, char sep, Std::vector<Std::string> &argv);
template void SplitString<istring>(const istring &args, char sep, Std::vector<istring> &argv);




template<class T> void SplitStringKV(const T &args, char sep,
									 Std::vector<Std::pair<T, T> > &argv) {
	// Clear the vector
	argv.clear();

	if (args.empty()) return;

	Std::vector<T> keyvals;
	SplitString(args, sep, keyvals);

	for (unsigned int i = 0; i < keyvals.size(); ++i) {
		Std::pair<T, T> keyval;
		typename T::size_type pos;
		pos = keyvals[i].find('=');
		keyval.first = keyvals[i].substr(0, pos);
		TrimSpaces(keyval.first);
		if (pos == T::npos) {
			keyval.second = "";
		} else {
			keyval.second = keyvals[i].substr(pos + 1);
			TrimSpaces(keyval.second);
		}
		if (!(keyval.first.empty() && keyval.second.empty()))
			argv.push_back(keyval);
	}
}

template void SplitStringKV<Std::string>(const Std::string &args, char sep, Std::vector<Std::pair<Std::string, Std::string> > &argv);
template void SplitStringKV<istring>(const istring &args, char sep, Std::vector<Std::pair<istring, istring> > &argv);

} // End of namespace Ultima8
} // End of namespace Ultima
