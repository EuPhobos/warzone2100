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
 * CodePrint.h
 *
 * Routines for displaying compiled scripts
 *
 */
#ifndef _codeprint_h
#define _codeprint_h

/* Display a value type */
extern void cpPrintType(INTERP_TYPE type);

/* Display a value  */
extern void cpPrintVal(INTERP_VAL *psVal);

/* Display a value from a program that has been packed with an opcode */
extern void cpPrintPackedVal(UDWORD *ip);

/* Print a function name */
extern void cpPrintFunc(SCRIPT_FUNC pFunc);

/* Print a variable access function name */
extern void cpPrintVarFunc(SCRIPT_VARFUNC pFunc, UDWORD index);

/* Display a maths operator */
extern void cpPrintMathsOp(UDWORD opcode);

#endif

