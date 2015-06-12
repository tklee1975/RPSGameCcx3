//
//  GameOverLayer.cpp
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#include "GameOverLayer.h"

// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
#include "GameData.h"

// on "init" you need to initialize your instance
bool GameOverLayer::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !Layer::init() )
	{
		return false;
	}
	
	// Setup GUI
	Node *rootNode = CSLoader::createNode("GameOverLayer.csb");
	addChild(rootNode);
	
	Node *mainPanel = rootNode->getChildByName("mainPanel");
	setupUI(mainPanel);
	
	updateScore();
	
	return true;
}



void GameOverLayer::setCallback(const GameOverLayerCallback &callback)
{
	mCallback = callback;
}

void GameOverLayer::callbackToOwner(UIButton buttonType)
{
	if(mCallback != nullptr) {
		mCallback(this, buttonType);
	}
}


void GameOverLayer::setupUI(Node *mainPanel)
{
	mScoreText = (Text *) mainPanel->getChildByName("scoreText");
	mYesButton = (Button *) mainPanel->getChildByName("yesButton");
	mNoButton = (Button *) mainPanel->getChildByName("noButton");
	
	Button::ccWidgetTouchCallback callback = [&](Ref* sender, Widget::TouchEventType type){
		switch (type)
		{
			case ui::Widget::TouchEventType::BEGAN:
			{
				if(sender == mYesButton) {
					log("yesbutton is clicked");
					callbackToOwner(UIButtonYes);
				} else if(sender == mNoButton) {
					log("nobutton is clicked");
					callbackToOwner(UIButtonNo);
				}
				
				break;
			}
		}
	};
	
	mYesButton->addTouchEventListener(callback);
	mNoButton->addTouchEventListener(callback);
}

void GameOverLayer::updateScore()
{
	int lastScore = GameData::instance()->getLastScore();
	int bestScore = GameData::instance()->getBestScore();
	
	char temp[100];
	
	sprintf(temp, "Best: %d Last: %d", bestScore, lastScore);
	
	mScoreText->setString(temp);
	
}


