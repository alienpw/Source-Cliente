/*
 * FILE: OptBase.cpp
 *
 * DESCRIPTION: Operation base class
 *
 * CREATED BY: Duyuxin, 2003/7/18
 *
 * HISTORY:
 *
 * Copyright (c) 2001 Archosaur Studio, All Rights Reserved.	
 */

#include "Global.h"
#include "OptBase.h"
#include "Utility.h"

///////////////////////////////////////////////////////////////////////////
//
//	Reference to External variables and functions
//
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//
//	Local Types and Variables and Global variables
//
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//
//	Local functions
//
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//
//	Implement COperation
//
///////////////////////////////////////////////////////////////////////////

//	Begin operation
bool COperation::Begin()
{
	if (m_iState != STATE_READY)
		return false;

	m_iState = STATE_DOING;	
	AUX_SetCursor(CURSOR_OPERATION);

	return true;
}

//	End operation
bool COperation::End(bool bCancel)
{	
	m_iState = bCancel ? STATE_CANCELED : STATE_FINISHED;
	AUX_SetCursor(CURSOR_ARROW);
	return true;
}

