#include "Controller.h"


Controller::Controller()
{
	this->_message = new UserMessage();
	this->_transmissor = new Transmissor();
}

Controller::~Controller() {

}

bool Controller::ConnectToSocket(std::string ipAddress, std::string port) {
	return this->_transmissor->Connect(ipAddress, port);
}

bool Controller::SendMessage(std::string text, std::string to)
{

	System::Windows::Forms::MessageBox::Show("Mensagem enviada para " + Util::ToManagedString(to));

	return false;
}

std::string Controller::ReceiveMessage()
{
	return std::string();
}

bool Controller::StillConnected() {
	return this->_transmissor->Connected();
}

bool Controller::Disconnect() {
	return this->_transmissor->Disconnect();
}


