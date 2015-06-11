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
	
	//Node *mainPanel = rootNode->getChildByName("mainPanel");
	//setupUI(mainPanel);
	
	
	return true;
}
