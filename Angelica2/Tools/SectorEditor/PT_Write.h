/*
 * FILE: PT_Write.h
 *
 * DESCRIPTION: File writing operations
 *
 * CREATED BY: Duyuxin, 2003/6/13
 *
 * HISTORY:
 *
 * Copyright (c) 2001 Archosaur Studio, All Rights Reserved.	
 */

#ifndef	_PT_WRITE_H_
#define _PT_WRITE_H_

#include "PT_Internal.h"

/////////////////////////////////////////////////////////////////////////
//
//	Constants and Macros
//
/////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//
//	Types and Global variables
//
/////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//
//	Global functions
//
/////////////////////////////////////////////////////////////////////////

namespace PORTAL
{
	bool WritePlanes(FILE* fp, PTFLUMP* aLumps);
	bool WritePortals(FILE* fp, PTFLUMP* aLumps);
	bool WriteSectors(FILE* fp, PTFLUMP* aLumps);
	bool WriteBSPNodes(FILE* fp, PTFLUMP* aLumps);
}

#endif	//	_PT_WRITE_H_

