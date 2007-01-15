/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2007  Warzone Resurrection Project

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
/***************************************************************************/

#ifndef _MIXER_H_
#define _MIXER_H_

/***************************************************************************/

#include "lib/framework/frame.h"
#include "audio.h"

/***************************************************************************/

WZ_DEPRECATED BOOL	mixer_Open( void );
WZ_DEPRECATED void	mixer_Close( void );
SDWORD	mixer_GetCDVolume( void );
void	mixer_SetCDVolume( SDWORD iVol );
SDWORD	mixer_GetWavVolume( void );
void	mixer_SetWavVolume( SDWORD iVol );
SDWORD	mixer_Get3dWavVolume( void );
void	mixer_Set3dWavVolume( SDWORD iVol );
WZ_DEPRECATED void	mixer_SaveWinVols();
WZ_DEPRECATED void	mixer_RestoreWinVols();
WZ_DEPRECATED void	mixer_SaveIngameVols();
WZ_DEPRECATED void	mixer_RestoreIngameVols();

/***************************************************************************/

#endif		// #ifndef _MIXER_H_

/***************************************************************************/
