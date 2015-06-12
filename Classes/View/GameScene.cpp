//
//  RPSGameScene.cpp
//  RPSGame
//
//  Created by Ken Lee on 1/6/15.
//
//

#include "GameScene.h"

// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "RPSSelectLayer.h"
#include "GameWinLayer.h"
#include "GameOverLayer.h"
#include "GameData.h"

namespace {
	const char *getSpriteNameForHand(HandType type) {
		if(HandTypePaper == type) {
			return "rps_paper.png";
		} else if(HandTypeRock == type) {
			return "rps_rock.png";
		} else if(HandTypeScissor == type) {
			return "rps_scissors.png";
		} else {
			return "";
		}
	}
}

void GameSceneLayer::restart()
{
	mWinCount = 0;
	updateWin();
	startNextRound();
}

void GameSceneLayer::startNextRound()
{
	changeHand(true, HandTypeNotShow);
	changeHand(false, HandTypeNotShow);
	showRPSSelection();
}



Scene *GameSceneLayer::createScene()
{
	auto scene = Scene::create();
	
	GameSceneLayer *layer = GameSceneLayer::create();
	layer->restart();
	
	// Add the layer to the scene
	scene->addChild(layer);
	
	return scene;
}

// on "init" you need to initialize your instance
bool GameSceneLayer::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
		return false;
	}
	
	// Setup GUI
	Node *rootNode = CSLoader::createNode("RPSGameScene.csb");
	addChild(rootNode);
	
	Node *mainPanel = rootNode->getChildByName("mainPanel");
	setupUI(mainPanel);
		
	
	showRPSSelection();
	
	return true;
}


void GameSceneLayer::setupUI(Node *mainPanel)
{
//	Node *mDialogPanel;
//	Text *mWinText;
	mDialogPanel = (Node *) mainPanel->getChildByName("dialogPanel");
	mWinText = (Text *) mainPanel->getChildByName("winText");
	
	Node *charPanel = (Node *)mainPanel->getChildByName("charPanel");
	mMyHandSprite = (Sprite *) charPanel->getChildByName("myHandSprite");
	mComHandSprite = (Sprite *) charPanel->getChildByName("comHandSprite");
	
	
	// Checking
	assert(mDialogPanel != nullptr);
	assert(mWinText != nullptr);
}

void GameSceneLayer::changeHand(bool isPlayer, HandType type)
{
	Sprite *sprite = isPlayer ? mMyHandSprite : mComHandSprite;
	
	switch(type) {
		case HandTypeRock:
		case HandTypePaper:
		case HandTypeScissor:
			sprite->setTexture(getSpriteNameForHand(type));
			sprite->setVisible(true);
			break;
			
		case HandTypeNotShow:
			sprite->setVisible(false);
			break;
	}
}



HandType GameSceneLayer::getComputerMove(HandType playerMove)
{
	if(playerMove == HandTypePaper) {
		return HandTypeRock;
	} else if(playerMove == HandTypeRock) {
		return HandTypePaper;
	} else {
		return HandTypeScissor;
	}
}

GameStatus GameSceneLayer::checkGameStatus(HandType playerMove, HandType comMove)
{
	if(playerMove == comMove) {
		return GameDraw;
	}
	
	bool playerWin = (playerMove == HandTypePaper && comMove == HandTypeRock)
				  || (playerMove == HandTypeScissor && comMove == HandTypePaper)
				  || (playerMove == HandTypeRock && comMove == HandTypeScissor);
	
	return playerWin ? GameWin : GameLose;
}

void GameSceneLayer::handleGameStatus(GameStatus status)
{
	if(GameLose == status) {
		GameData::instance()->setScore(mWinCount);
		showLoseDialog();
		return;
	}
	
	if(GameWin == status) {
		mWinCount++;
	}
	
	updateWin();
	showWinDialog(status);
	
}

void GameSceneLayer::handlePlayerMove(HandType playerMove)
{
	changeHand(true, playerMove);
	dismissDialog();
	
	
	HandType comMove = getComputerMove(playerMove);
	changeHand(false, comMove);

	
	GameStatus status = checkGameStatus(playerMove, comMove);
	handleGameStatus(status);
}

void GameSceneLayer::dismissDialog()
{
	if(mDialogPanel == nullptr) {
		return;
	}
	mDialogPanel->removeAllChildren();
}

void GameSceneLayer::showRPSSelection()
{
	if(mDialogPanel == nullptr) {
		return;
	}
	
	auto parent = this;
	
	mDialogPanel->removeAllChildren();
	
	RPSSelectLayer *layer = RPSSelectLayer::create();
	
	layer->setCallback([parent](Ref *, HandType handType) {
		log("RPS Selected: hand=%d", handType);
		parent->handlePlayerMove(handType);
	});
	
	mDialogPanel->addChild(layer);
}

void GameSceneLayer::showWinDialog(GameStatus status)
{
	if(mDialogPanel == nullptr) {
		return;
	}
	
	mDialogPanel->removeAllChildren();
	
	GameWinLayer *layer = GameWinLayer::create();
	layer->setGameStatus(status);
	auto parent = this;
	layer->setCallback([parent](Ref *) {
		parent->startNextRound();
	});

	
	mDialogPanel->addChild(layer);
}

void GameSceneLayer::updateWin()
{
	if(mWinText != nullptr) {
		char str[100];
		sprintf(str, "win: %d", mWinCount);
		
		mWinText->setString(str);
	}
}

void GameSceneLayer::gotoHomeScene() {
	Director::getInstance()->popToRootScene();
}

void GameSceneLayer::showLoseDialog()
{
	if(mDialogPanel == nullptr) {
		return;
	}
	
	mDialogPanel->removeAllChildren();
	
	GameOverLayer *layer = GameOverLayer::create();
	auto parent = this;
	layer->setCallback([parent](Ref *, UIButton button) {
		if(button == UIButtonYes) {
			parent->restart();
		} else {
			parent->gotoHomeScene();
		}
	});

	mDialogPanel->addChild(layer);
}

