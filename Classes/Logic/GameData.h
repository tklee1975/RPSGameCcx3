//
//  GameData.h
//  RPSGame
//
//  Created by Ken Lee on 12/6/15.
//
//

#ifndef __RPSGame__GameData__
#define __RPSGame__GameData__

#include <stdio.h>


class GameData
{
public: // Type and Enum
	static GameData *instance();
	
	void setScore(int newScore);
	int getLastScore();
	int getBestScore();
	
private:
	GameData();
	
private:
	int mBestScore;
	int mLastScore;
};

#endif /* defined(__RPSGame__GameData__) */
