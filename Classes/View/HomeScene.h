//
//  HomeScene.h
//  RPSGame
//
//  Created by Ken Lee on 28/5/15.
//
//

#ifndef __RPSGame__HomeScene__
#define __RPSGame__HomeScene__

#include <stdio.h>

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;

class HomeSceneLayer : public Layer
{
public:
	static Scene *createScene();
	
	CREATE_FUNC(HomeSceneLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	void setBestScore(int score);
	
	virtual void onEnter();
	virtual void onExit();
	
private:
	void setupUI(Node *mainPanel);
	void updateRecordText();
	
	void setupTouchListener();
	bool onTouchBegan(Touch *touch, Event *event);
	
	void gotoGameScene();
	
private:
	Text *mBestScoreLabel;
};

#endif /* defined(__RPSGame__HomeScene__) */
