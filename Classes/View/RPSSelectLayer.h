//
//  RPSSelectLayer.h
//  RPSGame
//
//  Created by Ken Lee on 2/6/15.
//
//

#ifndef __RPSGame__RPSSelectLayer__
#define __RPSGame__RPSSelectLayer__

#include <stdio.h>
#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"

USING_NS_CC_EXT;
USING_NS_CC;
using namespace cocos2d::ui;

#include "GameType.h"

class RPSSelectLayer : public Layer
{
public:
	typedef std::function<void(Ref *, HandType)> RPSSelectLayerCallback;
	
public:
	CREATE_FUNC(RPSSelectLayer);	// generate: static HomeSceneLayer *create();
	
	virtual bool init();
	
	//	virtual void onEnter();
	//	virtual void onExit();
	
	void setCallback(const RPSSelectLayerCallback &callback);
	
private:
	void setupUI(Node *mainPanel);
	bool onTouchBegan(Touch *touch, Event *event);
	void onTouchEnded(Touch *touch, Event *event);
	
	void selectMove(Sprite *sprite, HandType handType);
	void unselectMove();
	
private:
	Sprite *mRockSprite;
	Sprite *mPaperSprite;
	Sprite *mScissorSprite;
	Sprite *mSelectedSprite;
	float mSelectedSpriteOriginScale;
	Vec2 mSelectedSpriteOrigin;	// Origin position of the sprite
	RPSSelectLayerCallback mCallback;
};
#endif /* defined(__RPSGame__RPSSelectLayer__) */
