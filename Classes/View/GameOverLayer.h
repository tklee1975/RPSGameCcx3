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

#include "GameType.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;

class GameOverLayer : public Layer
{
public:
	typedef std::function<void(Ref *, UIButton)> GameOverLayerCallback;
	
public:
	CREATE_FUNC(GameOverLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	
	void setCallback(const GameOverLayerCallback &callback);
	
	//	virtual void onEnter();
	//	virtual void onExit();
	
private:
	void setupUI(Node *mainPanel);
	void callbackToOwner(UIButton buttonType);
	void updateScore();
	
private:
	Text *mScoreText;
	Button *mYesButton;
	Button *mNoButton;
	GameOverLayerCallback mCallback;
};


#endif /* defined(__RPSGame__GameOverLayer__) */
