#ifdef ENABLE_TDD
//
//  HomeSceneTest.h
//
//
#ifndef __TDD_HomeSceneTest__
#define __TDD_HomeSceneTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class HomeSceneTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void testScene(Ref *sender);
	void testLayer(Ref *sender);
}; 

#endif

#endif
