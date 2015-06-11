#ifdef ENABLE_TDD
//
//  GameLayerTest.m
//	TDD Framework 
//
//
#include "GameLayerTest.h"
#include "TDDHelper.h"
#include "RPSSelectLayer.h"
#include "GameWinLayer.h"
#include "GameOverLayer.h"

void GameLayerTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void GameLayerTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void GameLayerTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(GameLayerTest::testRPSSelect);
	SUBTEST(GameLayerTest::testWinLayer);
	SUBTEST(GameLayerTest::testGameOverLayer);
}

#pragma mark -
#pragma mark Sub Test Definition


void GameLayerTest::testRPSSelect(Ref *sender)
{
	log("this is a sample subTest");
	
	RPSSelectLayer *layer = RPSSelectLayer::create();
	layer->setCallback([](Ref *, HandType handType) {
		log("RPS Selected: hand=%d", handType);
	});
	
	addChild(layer);
}

void GameLayerTest::testWinLayer(Ref *sender)
{
	log("this is a sample subTest");
	
	GameWinLayer *layer = GameWinLayer::create();
	layer->setCallback([](Ref *) {
		log("Game Layer: callback done");
	});

	
	addChild(layer);
}


void GameLayerTest::testGameOverLayer(Ref *sender)
{
	log("this is a sample subTest");
	
	GameOverLayer *layer = GameOverLayer::create();
	
	addChild(layer);
}

#endif
