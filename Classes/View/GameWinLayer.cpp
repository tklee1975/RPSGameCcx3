//
//  GameWinLayer.cpp
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#include "GameWinLayer.h"


// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "ViewHelper.h"


// on "init" you need to initialize your instance
bool GameWinLayer::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
		return false;
	}
	
	// Setup GUI
	Node *rootNode = CSLoader::createNode("GameWinLayer.csb");
	addChild(rootNode);
	
	Node *mainPanel = rootNode->getChildByName("mainPanel");
	setupUI(mainPanel);
	
	
	return true;
}


void GameWinLayer::setupUI(Node *mainPanel)
{
	if(mainPanel == nullptr) {
		log("GameWinLayer: mainPanel is null");
		return;
	}
	// bind the game status text
	mGameStatusText = (Text *) mainPanel->getChildByName("gameStatusText");
	
	//
	setupTouchListener((Layout *)mainPanel);
//	mainPanel->setO
}


void GameWinLayer::setupTouchListener(Layout *panel)
{
	// Remove the touch made by the panel (ui::Layout)
	ViewHelper::setWidgetSwallowTouches(panel, false);
	
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	
	listener->onTouchBegan = CC_CALLBACK_2(GameWinLayer::onTouchBegan, this);
	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
}

bool GameWinLayer::onTouchBegan(Touch *touch, Event *event)
{
	log("GameWinLayer: layer is being touched!");
	if(mCallback != nullptr) {
		mCallback(this);
	}

	return true;
}

void GameWinLayer::setCallback(const GameWinLayerCallback &callback)
{
	mCallback = callback;
}

void GameWinLayer::setGameStatus(GameStatus status)
{
	const char *title;
	
	if(GameWin == status) {
		title = "You Win";
	} else {
		title = "Draw Game";
	}
	
	mGameStatusText->setString(title);
}