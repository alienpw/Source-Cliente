/*
* FILE: ASoundPlayerWrapper.h
*
* DESCRIPTION: 
*
* CREATED BY: Zhangyachuan, 2009/08/25
*
* HISTORY: 
*
* Copyright (c) 2009 Archosaur Studio, All Rights Reserved.
*/

#ifndef _ASoundPlayerWrapper_H_
#define _ASoundPlayerWrapper_H_

#include "AFileExpDecl.h"

///////////////////////////////////////////////////////////////////////////
//	
//	Define and Macro
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Types and Global variables
//	
///////////////////////////////////////////////////////////////////////////

class A3DEngine;
class ASoundPlayerImpl;

///////////////////////////////////////////////////////////////////////////
//	
//	Declare of Global functions
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Class ASoundPlayerWrapper
//	
///////////////////////////////////////////////////////////////////////////

class _AFILE_EXP_ ASoundPlayerWrapper
{

public:		//	Types

public:		//	Constructor and Destructor

public:		//	Attributes

public:		//	Operations


	static ASoundPlayerWrapper* CreateSoundPlayer();
	static void ReleaseSoundPlayer(ASoundPlayerWrapper* pSoundPlayer);

	//	Only support .mp3 .wav .ogg file
	bool Init(A3DEngine* pA3DEngine, const TCHAR* szSoundFile);
	void Release();
	bool Play();
	void Stop();

protected:	//	Attributes

	ASoundPlayerImpl* m_pImpl;

protected:	//	Operations

	ASoundPlayerWrapper(void);
	~ASoundPlayerWrapper(void);
	ASoundPlayerWrapper(const ASoundPlayerWrapper&);
	ASoundPlayerWrapper& operator = (const ASoundPlayerWrapper&);

};

///////////////////////////////////////////////////////////////////////////
//	
//	Inline functions
//	
///////////////////////////////////////////////////////////////////////////


#endif	//	_ASoundPlayerWrapper_H_


