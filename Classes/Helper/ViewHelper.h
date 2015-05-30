//
//  ViewHelper.h
//  RPSGame
//
//	A Helper class that help to do somethings on the View
//
//  Created by Ken Lee on 30/5/15.
//
//

#ifndef __RPSGame__ViewHelper__
#define __RPSGame__ViewHelper__

#include <stdio.h>
#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"

USING_NS_CC_EXT;
USING_NS_CC;

class ViewHelper
{
public:
	static void setWidgetSwallowTouches(Node *node, bool needSwallow);
};

#endif /* defined(__RPSGame__ViewHelper__) */
