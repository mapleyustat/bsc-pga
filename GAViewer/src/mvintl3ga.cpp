// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

// Copyright 2002-2009, Daniel Fontijne, University of Amsterdam -- fontijne@science.uva.nl

#include <stdio.h>
#include <math.h>

#include "object.h"
#include "mvint.h"
#include "util.h"
#include "state.h"

int mvInt::interpret(const l3ga &X, int creationFlags /* = 0*/) {
	m_type = MVI_L3GA;
	// no interpretation yet
	if (1) { // if (type == GA_MULTIVECTOR) {
		m_type |= MVI_UNKNOWN;
		m_valid = 1;
		return 0;
	}
	return 0;
}
