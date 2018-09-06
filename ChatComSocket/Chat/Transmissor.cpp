#include "Transmissor.h"



Transmissor::Transmissor()
{
	this->_haveConnection = false;
}


Transmissor::~Transmissor()
{
}

bool Transmissor::Connected() {
	return this->_haveConnection;
}

bool Transmissor::Connect(std::string ipAddress, std::string port) {
	
	return this->_haveConnection = true;
}

bool Transmissor::Disconnect() {
	this->_haveConnection = false;

	return true;
}
