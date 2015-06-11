//
//  GameType.h
//  RPSGame
//
//  Created by Ken Lee on 5/6/15.
//
//

#ifndef __RPSGame__GameType__
#define __RPSGame__GameType__

#include <stdio.h>

typedef enum {
	HandTypeNotShow = 0,
	HandTypeScissor = 1,
	HandTypeRock	= 2,
	HandTypePaper	= 3,
}HandType;

typedef enum {
	GameWin,
	GameLose,
	GameDraw,
}GameStatus;

#endif /* defined(__RPSGame__GameType__) */
