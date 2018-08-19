#include "Controller.h"



Controller::Controller()
{
	this->message = new UserMessage();
}

Controller::~Controller() {

}

bool Controller::SendMessage(std::string text, std::string to)
{

	System::Windows::Forms::MessageBox::Show("My controller foi acionado");

	return false;
}

std::string Controller::ReceiveMessage()
{
	return std::string();
}

