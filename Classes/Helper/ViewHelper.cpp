//
//  ViewHelper.cpp
//  RPSGame
//
//  Created by Ken Lee on 30/5/15.
//
//

#include "ViewHelper.h"

// For cocos 2d
using namespace cocos2d;


// For cocos studio
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d::ui;

void ViewHelper::setWidgetSwallowTouches(Node *node, bool needSwallow)
{
	Widget *widget = dynamic_cast<Widget *>(node);
	if(widget == nullptr) {
		return;
	}
	
	widget->setSwallowTouches(needSwallow);
}