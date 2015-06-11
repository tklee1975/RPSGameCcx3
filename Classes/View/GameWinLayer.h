//
//  GameWinLayer.h
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#ifndef __RPSGame__GameWinLayer__
#define __RPSGame__GameWinLayer__

#include <stdio.h>

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "GameType.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;

class GameWinLayer : public Layer
{
public:
	typedef std::function<void(Ref *)> GameWinLayerCallback;
public:
	CREATE_FUNC(GameWinLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	
	//	virtual void onEnter();
	//	virtual void onExit();
	void setCallback(const GameWinLayerCallback &callback);
	void setGameStatus(GameStatus status);
	
private:
	void setupUI(Node *mainPanel);
	void setupTouchListener(Layout *mainPanel);
	bool onTouchBegan(Touch *touch, Event *event);
private:
	Text *mGameStatusText;
	GameWinLayerCallback mCallback;
};

#endif /* defined(__RPSGame__GameWinLayer__) */
