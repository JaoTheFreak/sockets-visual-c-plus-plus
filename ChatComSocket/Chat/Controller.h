#pragma once

#include "UserMessage.h"
#include "Transmissor.h"
#include "Util.h"

#include <iostream>

public class Controller
{
private:
	UserMessage * _message;
	Transmissor * _transmissor;

public:
	Controller();
	~Controller();

	bool SendMessage(std::string text, std::string to);

	std::string ReceiveMessage();

	bool StillConnected();

	bool ConnectToSocket(std::string ipAddress, std::string port);

	bool Disconnect();
};

