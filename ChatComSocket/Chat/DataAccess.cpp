#include "DataAccess.h"



DataAccess::DataAccess(std::string userName, std::string userPassword, std::string databaseName,
	std::string serverIp, unsigned int serverPort)
{
	this->_userDb = userName;
	this->_passwordDb = userPassword;
	this->_dataBaseName = databaseName;
	this->_serverAddress = serverIp;
	this->_port = serverPort;

	connect = mysql_init(NULL);
	connect = mysql_real_connect(connect, _serverAddress.c_str(), _userDb.c_str(),
		_passwordDb.c_str(), _dataBaseName.c_str(), _port, NULL, 0);
}


DataAccess::~DataAccess()
{
}
