
#pragma once

#include <iostream>

class Transmissor
{
private:
	bool _haveConnection;

public:
	Transmissor();
	~Transmissor();
	bool Connected();

	bool Connect(std::string ipAddress, std::string port);

	bool Disconnect();
};

