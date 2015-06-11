//
//  RPSSelectLayer.cpp
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#include "RPSSelectLayer.h"

// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

//
#include "ViewHelper.h"

// on "init" you need to initialize your instance
bool RPSSelectLayer::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
		return false;
	}
	
	mSelectedSprite = nullptr;
	
	// Setup GUI
	Node *rootNode = CSLoader::createNode("RPSSelectLayer.csb");
	addChild(rootNode);
	
	Node *mainPanel = rootNode->getChildByName("mainPanel");
	setupUI(mainPanel);
	
	return true;
}

void RPSSelectLayer::setupUI(Node *mainPanel)
{
	mRockSprite = (Sprite *) mainPanel->getChildByName("rockSprite");
	mPaperSprite = (Sprite *) mainPanel->getChildByName("paperSprite");
	mScissorSprite = (Sprite *) mainPanel->getChildByName("scissorSprite");
	
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	
	ViewHelper::setWidgetSwallowTouches(mainPanel, false);
	
	listener->onTouchBegan = CC_CALLBACK_2(RPSSelectLayer::onTouchBegan, this);
	listener->onTouchEnded = CC_CALLBACK_2(RPSSelectLayer::onTouchEnded, this);
	
	
	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, mainPanel);
	
//	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, mPaperSprite);
//	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, mScissorSprite);
}

void RPSSelectLayer::onTouchEnded(Touch *touch, Event *event)
{
	log("RPSSelectLayer: Touch Ended");
	unselectMove();
}


bool RPSSelectLayer::onTouchBegan(Touch *touch, Event *event)
{
	log("RPSSelectLayer: Sprite Touched");
	
	Vec2 localPoint = convertToNodeSpace(touch->getLocation());

	
	log("RPSSelectLayer: touchPos=%f,%f", localPoint.x, localPoint.y);
	
	if(mRockSprite->getBoundingBox().containsPoint(localPoint)) {
		log("Rock is touched");
		selectMove(mRockSprite, HandTypeRock);
		
	} else if(mPaperSprite->getBoundingBox().containsPoint(localPoint)) {
		log("Paper is touched");
		selectMove(mPaperSprite, HandTypePaper);
		
	} else if(mScissorSprite->getBoundingBox().containsPoint(localPoint)) {
		log("Scissor is touched");
		selectMove(mScissorSprite, HandTypeScissor);
		
	} else {
		selectMove(nullptr, HandTypeNotShow);
	}
		
	
	return true;
}


void RPSSelectLayer::selectMove(Sprite *sprite, HandType handType)
{
	
	
	mSelectedSprite = sprite;
	
	if(sprite == nullptr) {
		return;
	}

	mSelectedSpriteOrigin = sprite->getPosition();
	mSelectedSpriteOriginScale = sprite->getScale();
	
	// high the selected sprite
	Vec2 newPos = mSelectedSpriteOrigin;
	newPos.y += 30;
	mSelectedSprite->setScale(mSelectedSpriteOriginScale + 0.4);
	mSelectedSprite->setPosition(newPos);

	// callback
	if(mCallback != nullptr) {
		mCallback(this, handType);
	}
}

void RPSSelectLayer::unselectMove()
{
	if(mSelectedSprite == nullptr) {
		return;
	}
	
	mSelectedSprite->setScale(mSelectedSpriteOriginScale);
	mSelectedSprite->setPosition(mSelectedSpriteOrigin);
}

void RPSSelectLayer::setCallback(const RPSSelectLayerCallback &callback)
{
	mCallback = callback;
}

