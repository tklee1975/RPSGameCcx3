#ifdef ENABLE_TDD
//
//  LocalStoreTest.h
//
//
#ifndef __TDD_LocalStoreTest__
#define __TDD_LocalStoreTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class LocalStoreTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void testGetString(Ref *sender);
}; 

#endif

#endif
