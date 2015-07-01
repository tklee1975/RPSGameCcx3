#ifdef ENABLE_TDD
//
//  RPSAITest.h
//
//
#ifndef __TDD_RPSAITest__
#define __TDD_RPSAITest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class RPSAITest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void testAIMove(Ref *sender);
}; 

#endif

#endif
