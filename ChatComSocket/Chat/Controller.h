#pragma once

#include "UserMessage.h"
#include <iostream>

public class Controller
{
private:
	UserMessage * message;

public:
	Controller();
	~Controller();

	bool SendMessage(std::string text, std::string to);

	std::string ReceiveMessage();
};

