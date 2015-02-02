#pragma once
#include "TestSignaler.h"
#include <memory>
#include <iostream>
#include <string>

class TestSignalUser
{
public:
	std::shared_ptr<TestSignaler> Signaler;

	void SubscribeToSignals()
	{
		Signaler->signal_one.connect<TestSignalUser, &TestSignalUser::SignalOneHandler>(this);
		Signaler->signal_two.connect<TestSignalUser, &TestSignalUser::SignalTwoHandler>(this);
	}

	bool SignalOneHandler() { 
		std::cout << "Got Signal One";
		return true; 
	}
	void SignalTwoHandler(std::string text) { 
		std::cout << text;
	}
};
