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
#ifndef __INCLUDED_BITIMAGE__
#define __INCLUDED_BITIMAGE__


typedef struct {
	UWORD NumCluts;
	UWORD *ClutIDs;
} CLUTLIST;

typedef void (*CLUTCALLBACK)(UWORD *clut);

UWORD iV_GetImageWidth(IMAGEFILE *ImageFile,UWORD ID);
UWORD iV_GetImageHeight(IMAGEFILE *ImageFile,UWORD ID);
UWORD iV_GetImageWidthNoCC(IMAGEFILE *ImageFile,UWORD ID);
UWORD iV_GetImageHeightNoCC(IMAGEFILE *ImageFile,UWORD ID);
SWORD iV_GetImageXOffset(IMAGEFILE *ImageFile,UWORD ID);
SWORD iV_GetImageYOffset(IMAGEFILE *ImageFile,UWORD ID);
UWORD iV_GetImageCenterX(IMAGEFILE *ImageFile,UWORD ID);
UWORD iV_GetImageCenterY(IMAGEFILE *ImageFile,UWORD ID);

IMAGEFILE *iV_LoadImageFile(char *FileData, UDWORD FileSize);
void iV_FreeImageFile(IMAGEFILE *ImageFile);


// Load a clut file into VRAM.
BOOL iV_LoadClut_PSX(UBYTE *Data,CLUTLIST **ClutList,BOOL HalfBright);
// Free up a clut list alloceted by iV_LoadClut_PSX.
void iV_FreeClut_PSX(CLUTLIST *ClutList);

#endif
