/*
 * FILE: A3DClassID.h
 *
 * DESCRIPTION: The class ids of each class in A3D Engine
 *
 * CREATED BY: Hedi, 2001/12/15
 *
 * HISTORY:
 *
 * Copyright (c) 2001 Archosaur Studio, All Rights Reserved.	
 */

#ifndef _A3DCLASSID_H_
#define _A3DCLASSID_H_

enum
{
	A3D_CID_UNKNOWN	= 0,
	A3D_CID_PARTICLESYSTEM,
	A3D_CID_SUPERSPRAY,
	A3D_CID_PARRAY,			
	A3D_CID_DECAL,	
	
	A3D_CID_SUPERDECAL,			//	5
	A3D_CID_BILLBOARD,
	A3D_CID_SNOW,			
	A3D_CID_RAIN,
	A3D_CID_STREAM,

	A3D_CID_GRAPHICSFX,			//	10
	A3D_CID_GFXPLAYEVENT,
	A3D_CID_CONTROLLEDJOINT,
	A3D_CID_BONE,
	A3D_CID_JOINT,

	A3D_CID_ANIMJOINT,			//	15
	A3D_CID_SPRINGJOINT,
	A3D_CID_AXISSPRINGJOINT,
	A3D_CID_COORDINATE,	
	A3D_CID_SKINMODEL,

	A3D_CID_SKINMODELACTIONCORE,//	20
	A3D_CID_SKELETONHOOK,
	A3D_CID_SKIN,
	A3D_CID_SKELETON,
	A3D_CID_SKINHITBOX,

	A3D_CID_PIXELSHADER,		//	25
	A3D_CID_VERTEXSHADER,
	A3D_CID_MESHBASE,
	A3D_CID_SKINMESH,
	A3D_CID_RIGIDMESH,

	A3D_CID_MORPHSKINMESH,		//	30
	A3D_CID_MORPHRIGIDMESH,
	A3D_CID_HANGER,
	A3D_CID_GFXHANGER,			
	A3D_CID_SKINMODELHANGER,

	A3D_CID_SUPPLEMESH,			//	35
	A3D_CID_SUPPLEMESHIMP,
	A3D_CID_SKINPHYSHAPE,
	A3D_CID_CAMERABASE,
	A3D_CID_CAMERA,

	A3D_CID_ORTHOCAMERA,		//	40
	A3D_CID_MUSCLEMESH,
	A3D_CID_MUSCLEMESHIMP,
	A3D_CID_CLOTHMESHIMP,
};

#endif	//	_A3DCLASSID_H_
