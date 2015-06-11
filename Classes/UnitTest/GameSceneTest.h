#ifdef ENABLE_TDD
//
//  GameSceneTest.h
//
//
#ifndef __TDD_GameSceneTest__
#define __TDD_GameSceneTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class GameSceneTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void testScene(Ref *sender);
	void testShowWin(Ref *sender);
	void testShowLose(Ref *sender);
	void testChangeHand(Ref *sender);
}; 

#endif

#endif
