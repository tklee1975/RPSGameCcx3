#ifdef ENABLE_TDD
//
//  ResourceTest.h
//
//
#ifndef __TDD_ResourceTest__
#define __TDD_ResourceTest__

// Include Header

#include "TDDTest.h"

// Class Declaration 
class ResourceTest : public TDDTest
{
protected:
	virtual void setUp();
	virtual void tearDown();
	virtual void setSubTest(Vector<MenuItem *> &menuArray);
	
private:
	void subTest(Ref *sender);
}; 

#endif

#endif
