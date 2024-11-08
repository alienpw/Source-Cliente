/*
 * FILE: MenuUpdate.cpp
 *
 * DESCRIPTION: Menu update routines
 *
 * CREATED BY: duyuxin, 2002/1/31
 *
 * HISTORY:
 *
 * Copyright (c) 2001 Archosaur Studio, All Rights Reserved.
 */

#include "CommonDef.h"
#include "MainForm.h"

///////////////////////////////////////////////////////////////////////////
//
//	Define and Macro
//
///////////////////////////////////////////////////////////////////////////


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

MAINMENUUPDATE		g_MainMenuUpdate;
GENERALMENUUPDATE	g_GenMenuUpdate;
SHADERMENUUPDATE	g_ShaderMenuUpdate;
STAGEMENUUPDATE		g_StageMenuUpdate;

///////////////////////////////////////////////////////////////////////////
//
//	Local functions
//
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//
//	Implement
//
///////////////////////////////////////////////////////////////////////////

void CMainForm::OnUpdateFileNew(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(g_MainMenuUpdate.bFile_New);	
}

void CMainForm::OnUpdateFileOpen(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(g_MainMenuUpdate.bFile_Open);
}

void CMainForm::OnUpdateFileExit(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(g_MainMenuUpdate.bFile_Exit);	
}

void CMainForm::OnUpdateFileSaveall(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(g_MainMenuUpdate.bFile_SaveAll);
}

void CMainForm::OnUpdateFileSetworkpath(CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(g_MainMenuUpdate.bFile_WorkDir);
}






