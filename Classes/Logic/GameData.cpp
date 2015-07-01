//
//  GameData.cpp
//  RPSGame
//
//  Created by Ken Lee on 12/6/15.
//
//

#include "GameData.h"
#include "cocos2d.h"

USING_NS_CC;

#define kKeyScore		"rps.game.score"

static GameData *sInstance = NULL;


//#define k
GameData *GameData::instance()
{
	if(sInstance != NULL) {
		return sInstance;
	}
	
	sInstance = new GameData();
	
	return sInstance;
}

GameData::GameData()
: mBestScore(0)
, mLastScore(0)
{
	
}

int GameData::getLastScore()
{
	return mLastScore;
}

int GameData::getBestScore()
{
	return mBestScore;
}

void GameData::setScore(int newScore)
{
	mLastScore = newScore;
	
	bool needSaveData = false;
	if(mLastScore > mBestScore) {
		mBestScore = mLastScore;
		
		needSaveData = true;
	}
	
	
	// Save data
	if(needSaveData) {
		saveData();
	}
}

void GameData::saveData()
{
	UserDefault::getInstance()->setIntegerForKey(kKeyScore, mBestScore);
}

void GameData::loadData()
{
	mBestScore = UserDefault::getInstance()->getIntegerForKey(kKeyScore, 0);
}