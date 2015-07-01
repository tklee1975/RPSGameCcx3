//
//  RPSAI.cpp
//  RPSGame
//
//  Created by Ken Lee on 13/6/15.
//
//

#include "RPSAI.h"
static RPSAI *sInstance = NULL;

//#define k
RPSAI *RPSAI::instance()
{
	if(sInstance != NULL) {
		return sInstance;
	}
	
	sInstance = new RPSAI();
	
	return sInstance;
}

RPSAI::RPSAI()
{
	
}

HandType RPSAI::getAIMove()
{
	int rand = (int)(CCRANDOM_0_1() * 3);
	
	if(rand == 0) {
		return HandTypeScissor;
	} else if(rand == 1) {
		return HandTypeRock;
	} else {
		return HandTypePaper;
	}
	
}