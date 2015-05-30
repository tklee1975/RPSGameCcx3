#ifdef ENABLE_TDD
//
//  HomeSceneTest.m
//	TDD Framework 
//
//
#include "HomeSceneTest.h"
#include "TDDHelper.h"
#include "HomeScene.h"

void HomeSceneTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void HomeSceneTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void HomeSceneTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(HomeSceneTest::testScene);
	SUBTEST(HomeSceneTest::testLayer);
}

#pragma mark -
#pragma mark Sub Test Definition
void HomeSceneTest::testScene(Ref *sender)
{
	log("this is a sample subTest");
	Scene *scene = HomeSceneLayer::createScene();
	
	Director::getInstance()->pushScene(scene);
}

void HomeSceneTest::testLayer(Ref *sender)
{
	HomeSceneLayer *layer = HomeSceneLayer::create();
	
	layer->setBestScore(100);
	
	this->addChild(layer);
}


#endif
