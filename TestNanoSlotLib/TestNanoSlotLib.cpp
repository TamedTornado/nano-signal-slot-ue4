// TestNanoSlotLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "TestSignalUser.h"
#include "TestSignaler.h"
#include <memory>


int _tmain(int argc, _TCHAR* argv[])
{
	std::unique_ptr<TestSignalUser> testObj = std::make_unique<TestSignalUser>();
	std::shared_ptr<TestSignaler> testSigObj = std::make_shared<TestSignaler>();

	testObj->Signaler = testSigObj;

	testObj->SubscribeToSignals();

	testSigObj->SendSignals();

	return 0;
}

