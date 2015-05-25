#ifdef ENABLE_TDD
//
//  ResourceTest.m
//	TDD Framework 
//
//
#include "ResourceTest.h"
#include "TDDHelper.h"

#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace cocostudio::timeline;


void ResourceTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void ResourceTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void ResourceTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(ResourceTest::subTest);
}

#pragma mark -
#pragma mark Sub Test Definition
void ResourceTest::subTest(Ref *sender)
{
	log("Testing Resoures");
	
	Node *rootNode = CSLoader::createNode("TestLayer.csb");

	addChild(rootNode);
}


#endif
