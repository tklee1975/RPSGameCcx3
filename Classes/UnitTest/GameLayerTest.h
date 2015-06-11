#ifdef ENABLE_TDD
//
//  GameLayerTest.h
//
//
#ifndef __TDD_GameLayerTest__
#define __TDD_GameLayerTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class GameLayerTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void testRPSSelect(Ref *sender);
	void testWinLayer(Ref *sender);
	void testGameOverLayer(Ref *sender);
	
}; 

#endif

#endif
