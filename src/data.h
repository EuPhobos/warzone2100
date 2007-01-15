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
/*
 * Data.h
 *
 * Data loading functions
 */
#ifndef _data_h
#define _data_h

/* Pass all the data loading functions to the framework library */
extern BOOL dataInitLoadFuncs(void);

extern BOOL dataIMGPAGELoad(char *pBuffer, UDWORD size, void **ppData);
extern void dataIMGPAGERelease(void *pData);

extern void dataSetSaveFlag(void);
extern void dataClearSaveFlag(void);

// multiplayer cheat code.
#define CHEAT_SWEAPON	0
#define CHEAT_SBODY		1
#define CHEAT_SCONSTR	2
#define CHEAT_SECM		3
#define CHEAT_SPROP		4
#define CHEAT_SSENSOR	5
#define CHEAT_SREPAIR	6
#define CHEAT_SBRAIN	7
#define CHEAT_SPROPTY	8
#define CHEAT_STERRT	9	
#define CHEAT_SWEAPMOD	10
#define CHEAT_STEMP		11
#define CHEAT_STEMPWEAP	12
#define CHEAT_SSTRUCT	13
#define CHEAT_SSTRWEAP	14
#define CHEAT_STRFUNC	15
#define CHEAT_SSTRMOD	16
#define CHEAT_SFEAT		17
#define CHEAT_SFUNC		18
#define CHEAT_RESCH		19
#define CHEAT_RPREREQ	20
#define CHEAT_RCOMPRED	21
#define CHEAT_RSTRREQ	22
#define CHEAT_RCOMPRES	23
#define CHEAT_RSTRRED	24
#define CHEAT_RSTRRES	25
#define CHEAT_RFUNC		26
#define CHEAT_SCRIPT	27
#define CHEAT_SCRIPTVAL	28	

#define CHEAT_MAXCHEAT	29	

extern void resetCheatHash();

extern UDWORD cheatHash[CHEAT_MAXCHEAT];

#endif

