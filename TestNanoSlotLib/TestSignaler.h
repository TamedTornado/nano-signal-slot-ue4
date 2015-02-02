#pragma once

#include "../nano-signal-slot-module/nano_signal_slot.h"

class TestSignaler
{
public:
	Nano::Signal<bool()> signal_one;
	Nano::Signal<void(std::string dude)> signal_two;

	void SendSignals();
};
