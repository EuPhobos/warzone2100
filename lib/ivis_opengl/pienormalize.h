/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2019  Warzone 2100 Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef _pieNormalize_h
#define _pieNormalize_h

#include "lib/ivis_opengl/piedef.h"
#include <glm/gtc/matrix_transform.hpp>

// FIXME: Zero vector normalization should be handled on caller side.
template<typename T>
WZ_DECL_PURE T normalise(const T&a)
{
	return glm::dot(a, a) > 0.f ? glm::normalize(a) : a;
}

/*!
 * Calculate surface normal
 * Eg. if a polygon (with n points in clockwise order) normal is required,
 * \c p1 = point 0, \c p2 = point 1, \c p3 = point n-1
 * \param p1,p2,p3 Points for forming 2 vector for cross product
 * \return Normal vector
 */
static inline Vector3f pie_SurfaceNormal3fv(const Vector3f p1, const Vector3f p2, const Vector3f p3)
{
	return normalise(glm::cross(p3 - p1, p2 - p1));
}

#endif
