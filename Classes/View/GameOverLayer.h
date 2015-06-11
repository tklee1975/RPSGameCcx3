//
//  GameOverLayer.h
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#ifndef __RPSGame__GameOverLayer__
#define __RPSGame__GameOverLayer__

#include <stdio.h>


#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;

class GameOverLayer : public Layer
{
public:
	CREATE_FUNC(GameOverLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	
	//	virtual void onEnter();
	//	virtual void onExit();
	
private:
	void setupUI(Node *mainPanel);
	
private:
	
};


#endif /* defined(__RPSGame__GameOverLayer__) */
