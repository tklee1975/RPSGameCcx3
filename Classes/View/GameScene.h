//
//  RPSGameScene.h
//  RPSGame
//
//  Created by Ken Lee on 1/6/15.
//
//

#ifndef __RPSGame__RPSGameScene__
#define __RPSGame__RPSGameScene__

#include <stdio.h>

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "GameType.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;


class GameSceneLayer : public Layer
{
public:
	static Scene *createScene();
	
	CREATE_FUNC(GameSceneLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	
//	virtual void onEnter();
//	virtual void onExit();
	
	void showWinDialog(GameStatus status);
	void showRPSSelection();
	void showLoseDialog();
	void dismissDialog();
	
	void changeHand(bool isPlayer, HandType type);
	
private:
	void setupUI(Node *mainPanel);
	
	void gotoHomeScene();

	void restart();
	void startNextRound();
	void handlePlayerMove(HandType type);
	HandType getComputerMove(HandType playerMove);
	GameStatus checkGameStatus(HandType playerMove, HandType comMove);
	void handleGameStatus(GameStatus status);
	void updateWin();
	
private:
	int mWinCount;
	Node *mDialogPanel;
	Text *mWinText;
	Sprite *mMyHandSprite;
	Sprite *mComHandSprite;
};

#endif /* defined(__RPSGame__RPSGameScene__) */
