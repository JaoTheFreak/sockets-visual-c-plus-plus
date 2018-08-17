#include "Controller.h"



Controller::Controller()
{
	this->message = new UserMessage();
}

Controller::~Controller() {

}

bool Controller::SendMessage(std::string text, std::string to)
{

	return false;
}

std::string Controller::ReceiveMessage()
{
	return std::string();
}

