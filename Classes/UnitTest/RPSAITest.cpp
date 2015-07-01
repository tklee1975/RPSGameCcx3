#ifdef ENABLE_TDD
//
//  RPSAITest.m
//	TDD Framework 
//
//
#include "RPSAITest.h"
#include "TDDHelper.h"
#include "RPSAI.h"
#include "GameType.h"

void RPSAITest::setUp()
{
	log("TDD Setup is called");
	log("Please write somethings");
}


void RPSAITest::tearDown()
{
	log("TDD tearDown is called");
	log("Please do clean up here");
}

#pragma mark -
#pragma mark List of Sub Tests

void RPSAITest::setSubTest(Vector<MenuItem *> &menuArray)
{
	SUBTEST(RPSAITest::testAIMove);
}

#pragma mark -
#pragma mark Sub Test Definition
void RPSAITest::testAIMove(Ref *sender)
{
	log("testAIMove");
	
	for(int i=0; i<10; i++) {
		HandType type = RPSAI::instance()->getAIMove();
		
		log("%d: hand=%d", i, type);
	}
}


#endif
