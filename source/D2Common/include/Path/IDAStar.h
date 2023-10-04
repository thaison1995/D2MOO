#pragma once

#include "CommonDefinitions.h"
#include "Path.h"

#pragma pack(1)

enum PATH_IDASTAR_CONSTANTS
{
	IDASTAR_MAXPROOM = 50000, // Max size of a room for IDAStar (ptRoomCoords->nSizeGameX * ptRoomCoords->nSizeGameY <= MAXPROOM)
	FOWALL_CACHE_SIZE = 128,
};

struct D2PathFoWallNodeStrc					    //sizeof 0x38
{
	D2PathPointStrc tPoint;						//0x00
	int16_t nFScore;							//0x04
	int16_t nHeuristicDistanceToTarget;			//0x06
	int16_t nBestDistanceFromStart;				//0x08
	uint16_t wPad;								//0x0A
	D2PathFoWallNodeStrc* pBestParent;		    //0x0C
	D2PathFoWallNodeStrc* pParents[8];			//0x10
	D2PathFoWallNodeStrc* pNextCachePoint;		//0x30
	D2PathFoWallNodeStrc* pNextSortedByFScore;	//0x34
} ;

struct D2PathFoWallContextStrc								 //sizeof 0x32EC
{
	D2PathFoWallNodeStrc* aPendingCache[FOWALL_CACHE_SIZE];  //0x0000
	D2PathFoWallNodeStrc* aVisitedCache[FOWALL_CACHE_SIZE];  //0x0200
	D2PathFoWallNodeStrc* pSortedListByFScore;			     //0x0400
	D2PathFoWallNodeStrc aNodesStorage[200];			     //0x0404
	int32_t nNodesCount;								     //0x2FC4
	D2PathFoWallNodeStrc* aPointsStack[200];				 //0x2FC8
	int32_t nStackCount;									 //0x32E8
};

};

#pragma pack()

//D2Common.0x6FDA69E0
int __fastcall PATH_FoWall_ComputePath(D2PathInfoStrc* pPathInfo);

//D2Common.0x6FDA6D10
int __fastcall PATH_FoWall_PushToVisitedCache(D2PathFoWallContextStrc* pContext, D2PathFoWallNodeStrc* pNode);

//1.10f: D2Common.0x6FDA6D50
//1.13c: D2Common.0x6FDCB3C0
BOOL __fastcall PATH_FoWall_ExploreChildren(D2PathInfoStrc* pPathInfo, D2PathFoWallContextStrc* pContext, D2PathFoWallNodeStrc* a3, D2PathPointStrc tTargetCoord);

//1.10f: D2Common.0x6FDA7230
//1.13c: D2Common.0x6FDCAF70
int __stdcall PATH_FoWall_Heuristic(D2PathPointStrc tPoint1, D2PathPointStrc tPoint2);

//1.00:  D2Common.0x10057A10
//1.10f: D2Common.0x6FDA7280
//1.13c: D2Common.0x6FDCAF20
D2PathFoWallNodeStrc* __fastcall PATH_FoWall_GetNodeFromPendingCache(D2PathFoWallContextStrc* pContext, D2PathPointStrc tPathPoint);
//1.00:  D2Common.0x10057A10
//1.10f: D2Common.0x6FDA72D0
//1.13c: D2Common.0x6FDCAED0
D2PathFoWallNodeStrc* __fastcall PATH_FoWall_FindPointInVisitedCache(D2PathFoWallContextStrc* pContext, D2PathPointStrc tPathPoint);

//1.10f: D2Common.0x6FDA7320
//1.13c: D2Common.0x6FDCAE20
void __fastcall PATH_FoWall_MakeCandidate(D2PathFoWallContextStrc* pContext, D2PathFoWallNodeStrc* pPoint);

//1.10f: D2Common.0x6FDA7390
//1.13c: D2Common.0x6FDCAC50
void __fastcall PATH_FoWall_RecomputeShortestPathToStart(D2PathFoWallContextStrc* pContext, int nUnused, D2PathFoWallNodeStrc* pNewPoint);

//1.10f: D2Common.0x6FDA7450
//1.13c: Inlined
D2PathFoWallNodeStrc* __fastcall PATH_FoWall_GetNewNode(D2PathFoWallContextStrc* pContext);

//1.10f: D2Common.0x6FDA7490
//1.13c: D2Common.0x6FDCAFB0
BOOL __fastcall PATH_FoWall_EvaluateNeighbour(D2PathInfoStrc* pPathInfo, D2PathFoWallContextStrc* pContext, D2PathFoWallNodeStrc* pCurrentNode, D2PathPointStrc tNewPointCoord, D2PathPointStrc tTargetCoord);

//D2Common.0x6FDA78A0
signed int __fastcall PATH_FoWall_FlushNodeToDynamicPath(D2PathFoWallNodeStrc* pNode, D2PathInfoStrc* pPathInfo);

//1.10f: D2Common.0x6FDA7970
//1.13c: D2Common.0x6FDC0E40
int __fastcall PATH_IdaStar_6FDA7970(D2PathInfoStrc* pPathInfo);

////D2Common.0x6FDA7D40
//int __fastcall sub_6FDA7D40(int a1, signed int a2, int a3);
////D2Common.0x6FDA81C0
//int __fastcall sub_6FDA81C0(int a1, int a2);