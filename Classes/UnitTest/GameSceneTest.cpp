#ifdef ENABLE_TDD
//
//  GameSceneTest.m
//	TDD Framework 
//
//
#include "GameSceneTest.h"
#include "TDDHelper.h"
#include "GameScene.h"

void GameSceneTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void GameSceneTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void GameSceneTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(GameSceneTest::testScene);
	SUBTEST(GameSceneTest::testShowWin);
	SUBTEST(GameSceneTest::testShowLose);
	SUBTEST(GameSceneTest::testChangeHand);
}

#pragma mark -
#pragma mark Sub Test Definition
void GameSceneTest::testScene(Ref *sender)
{
	log("this is a sample subTest");
	auto scene = GameSceneLayer::createScene();
	
	Director::getInstance()->pushScene(scene);
}

void GameSceneTest::testShowWin(Ref *sender)
{
	GameSceneLayer *layer = GameSceneLayer::create();
	
	layer->showWinDialog(GameWin);
	
	addChild(layer);
}

void GameSceneTest::testShowLose(Ref *sender)
{
	GameSceneLayer *layer = GameSceneLayer::create();
	
	layer->showLoseDialog();
	
	addChild(layer);
}

void GameSceneTest::testChangeHand(Ref *sender)
{
	GameSceneLayer *layer = GameSceneLayer::create();
	
	layer->changeHand(true, HandTypeNotShow);
	layer->changeHand(false, HandTypeRock);
	
	addChild(layer);
}


#endif
