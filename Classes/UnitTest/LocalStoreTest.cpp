#ifdef ENABLE_TDD
//
//  LocalStoreTest.m
//	TDD Framework 
//
//
#include "LocalStoreTest.h"
#include "TDDHelper.h"
#include "cocos2d.h"

USING_NS_CC;

void LocalStoreTest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void LocalStoreTest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void LocalStoreTest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(LocalStoreTest::testGetString);
}

#pragma mark -
#pragma mark Sub Test Definition
void LocalStoreTest::testGetString(Ref *sender)
{
	log("testGetString");
	
	const char *key = "testStoreString";
	
	std::string str = UserDefault::getInstance()->getStringForKey(key);
	
	log("loadString: str=%s", str.c_str());
	std::string newStr = str + "-blessing";
	
	
	UserDefault::getInstance()->setStringForKey(key, newStr);
}


#endif
