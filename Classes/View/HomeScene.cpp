//
//  HomeScene.cpp
//  RPSGame
//
//  Created by Ken Lee on 28/5/15.
//
//

#include "HomeScene.h"
// For cocos 2d
using namespace cocos2d;


// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

#include "GameScene.h"
#include "TDDHelper.h"
#include "ViewHelper.h"
#include "GameData.h"

using namespace cocostudio::timeline;


Scene *HomeSceneLayer::createScene()
{
	auto scene = Scene::create();
	
	HomeSceneLayer *layer = HomeSceneLayer::create();

	// Add the testing button
	TDDHelper::addTestButton(layer, Vec2(50, 100));
	
	// Add the layer to the scene
	scene->addChild(layer);
	
	return scene;
}

// on "init" you need to initialize your instance
bool HomeSceneLayer::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
		return false;
	}
	
	mBestScoreLabel = nullptr;
	
	// Setup GUI
	Node *rootNode = CSLoader::createNode("HomeScene.csb");
	addChild(rootNode);
	
	Node *mainPanel = rootNode->getChildByName("mainPanel");
	setupUI(mainPanel);
	
	// Setup touch handling
	// setupTouchListener();	// ken: bug, cannot do this here!!
	
	
	
	return true;
}

#pragma mark - UI Setup

void HomeSceneLayer::updateRecordText()
{
	char temp[100];
	
	int bestScore = GameData::instance()->getBestScore();
	if(bestScore == 0) {
		sprintf(temp, "No record yet");
	} else {
		sprintf(temp, "Best: %d wins", bestScore);
	}
	
	mBestScoreLabel->setString(temp);
}

void HomeSceneLayer::setupUI(Node *mainPanel)
{
	Node *subPanel = mainPanel->getChildByName("subPanel");
	
	
	// Remove the touch made by the panel (ui::Layout)
	ViewHelper::setWidgetSwallowTouches(mainPanel, false);
	ViewHelper::setWidgetSwallowTouches(subPanel, false);
	
	// Bind the Text object
	mBestScoreLabel = (Text *) subPanel->getChildByName("recordText");
}

#pragma mark - Enter and Exit
void HomeSceneLayer::onEnter()
{
	log("HomeSceneLayer: onEnter");
	
	Layer::onEnter();
	
	setupTouchListener();
	
	updateRecordText();

}

void HomeSceneLayer::onExit()
{
	log("HomeSceneLayer: onExit");
	
	this->getEventDispatcher()->removeEventListenersForTarget(this);
	
	Layer::onExit();
}

#pragma mark - Touch Handling

void HomeSceneLayer::setupTouchListener()
{
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	
	listener->onTouchBegan = CC_CALLBACK_2(HomeSceneLayer::onTouchBegan, this);
	
	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
}

bool HomeSceneLayer::onTouchBegan(Touch *touch, Event *event)
{
	log("HomeScene: layer is being touched!");
	
	gotoGameScene();
	return true;
}

#pragma mark - Flow Control
void HomeSceneLayer::gotoGameScene()
{
	// TODO: Flow to
	auto scene = GameSceneLayer::createScene();
	Director::getInstance()->pushScene(scene);
	
}

#pragma mark - Handle the Best Score Text

void HomeSceneLayer::setBestScore(int score)
{
	if(mBestScoreLabel == nullptr) {
		log("error: homeSceneLayer: mBestScoreLabel is null");
		return;
	}
	
	char str[100];
	if(score <= 0) {
		strcpy(str, "No record yet");
	} else {
		sprintf(str, "Best: %d", score);
	}
	
	mBestScoreLabel->setString(str);
}