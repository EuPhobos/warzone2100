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
/*
 * pieBlitFunc.h
 *
 * patch for exisitng ivis rectangle draw functions.
 *
 */
/***************************************************************************/

#ifndef _pieBlitFunc_h
#define _pieBlitFunc_h

/***************************************************************************/

#include "lib/framework/frame.h"
#include "piedef.h"

/***************************************************************************/
/*
 *	Global Definitions
 */
/***************************************************************************/
#define BACKDROP_WIDTH	640
#define BACKDROP_HEIGHT	480

/***************************************************************************/
/*
 *	Global Variables
 */
/***************************************************************************/

/***************************************************************************/
/*
 *	Global ProtoTypes
 */
/***************************************************************************/
extern void pie_Line(int x0, int y0, int x1, int y1, uint32 colour);
extern void pie_Box(int x0,int y0, int x1, int y1, uint32 colour);
extern void pie_BoxFillIndex(int x0,int y0, int x1, int y1, UBYTE colour);
extern void pie_BoxFill(int x0,int y0, int x1, int y1, uint32 colour);
extern void pie_DrawImageFileID(IMAGEFILE *ImageFile,UWORD ID,int x,int y);
extern void pie_ImageFileID(IMAGEFILE *ImageFile,UWORD ID,int x,int y);
extern void pie_ImageFileIDTile(IMAGEFILE *ImageFile,UWORD ID,int x,int y,int x0,int y0,int Width,int Height);
extern void pie_ImageFileIDStretch(IMAGEFILE *ImageFile,UWORD ID,int x,int y,int Width,int Height);
extern void pie_ImageDef(IMAGEDEF *Image,iBitmap *Bmp,UDWORD Modulus,int x,int y,BOOL bBilinear);

extern void pie_TransBoxFill(SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1);
extern void pie_UniTransBoxFill(SDWORD x0,SDWORD y0, SDWORD x1, SDWORD y1, UDWORD rgb, UDWORD transparency);

extern void pie_DrawRect(SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1, UDWORD colour, BOOL bClip);

extern BOOL pie_InitRadar(void);
extern BOOL pie_ShutdownRadar(void);
extern void pie_DownLoadRadar(unsigned char *buffer, UDWORD texPageID);
extern void pie_RenderRadar(IMAGEDEF *Image,iBitmap *Bmp,UDWORD Modulus,int x,int y);
extern void pie_RenderRadarRotated(IMAGEDEF *Image,iBitmap *Bmp,UDWORD Modulus,int x,int y,int angle);

extern void pie_UploadDisplayBuffer(char *DisplayBuffer);
extern void pie_DownloadDisplayBuffer(char *DisplayBuffer);

extern	void	pie_SetAdditiveSprites(BOOL	val);
extern	void	pie_SetAdditiveSpriteLevel(UDWORD	val);

typedef enum _screenType
{
	SCREEN_RANDOMBDROP,
	SCREEN_CREDITS,
	SCREEN_MISSIONEND,
	SCREEN_SLIDE1,
	SCREEN_SLIDE2,
	SCREEN_SLIDE3,
	SCREEN_SLIDE4,
	SCREEN_SLIDE5,
	SCREEN_COVERMOUNT,
} SCREENTYPE;

extern void pie_LoadBackDrop(SCREENTYPE screenType, BOOL b3DFX);
extern void pie_ResetBackDrop(void);

#endif //
