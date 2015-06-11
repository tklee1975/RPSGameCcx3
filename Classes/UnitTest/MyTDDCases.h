//
//  MyTDDCases.h
//  Cocos2dxTDDLib
//
//	This header should be included by TDDCases.h only
//  Created by Ken Lee on 25/5/14.
//
//


// Add the Header here!
#include "TDDSample.h"
#include "ResourceTest.h"
#include "HomeSceneTest.h"
#include "GameSceneTest.h"
#include "GameLayerTest.h"

//#include#
// NOTE!!! The above line is used to generate new unit test, must not be removed.

// Define
TDD_CASES
{
	TEST(TDDSample),
	TEST(ResourceTest),
	TEST(GameSceneTest),
	TEST(HomeSceneTest),
	TEST(GameLayerTest),
//#testcase#
// NOTE!!! The above line is used to generate new unit test, must not be removed.
};


