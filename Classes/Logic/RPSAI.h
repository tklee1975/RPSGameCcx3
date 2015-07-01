//
//  RPSAI.h
//  RPSGame
//
//  Created by Ken Lee on 13/6/15.
//
//

#ifndef __RPSGame__RPSAI__
#define __RPSGame__RPSAI__

#include <stdio.h>

#include "GameType.h"

class RPSAI
{
public:
	static RPSAI *instance();

public:
	//void setPlayerMove(HandType playerMove);
	HandType getAIMove();
	
private:
	RPSAI();
	
};
#endif /* defined(__RPSGame__RPSAI__) */
