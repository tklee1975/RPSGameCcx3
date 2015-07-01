//
//	Commonly used macro, constant, methods...
//
//  GameCommon.cpp
//  RPSGame
//
//  Created by Ken Lee on 2/7/15.
//
//

#include "GameCommon.h"

#if !defined(COCOS2D_DEBUG) || COCOS2D_DEBUG == 0
bool const IS_RELEASE = true;
#else
bool const IS_RELEASE = false;
#endif

