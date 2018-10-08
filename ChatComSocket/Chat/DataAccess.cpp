#include "DataAccess.h"
#include "Util.h"



DataAccess::DataAccess(std::string userName, std::string userPassword, std::string databaseName,
	std::string serverIp, unsigned int serverPort)
{
	this->_userDb = userName;
	this->_passwordDb = userPassword;
	this->_dataBaseName = databaseName;
	this->_serverAddress = serverIp;
	this->_port = serverPort;

	connect = mysql_init(NULL);

	/*connect = mysql_real_connect(connect, _serverAddress.c_str(), _userDb.c_str(),
		_passwordDb.c_str(), _dataBaseName.c_str(), _port, NULL, 0);*/
}


DataAccess::DataAccess()
{
}

DataAccess::~DataAccess()
{	
	if (this->connect != NULL) {
		mysql_close(this->connect);
	}

}

bool DataAccess::CreateNewUser(std::string newUserName, std::string newUserPassword, std::string newUserLogin)
{
	try {

		this->connect = mysql_real_connect(connect, _serverAddress.c_str(), _userDb.c_str(),
			_passwordDb.c_str(), _dataBaseName.c_str(), _port, NULL, 0);
		
		if (!connect)
		{
			return false;
		}		

		
		std::string query = "INSERT INTO user VALUES ( NULL, \"" + newUserName + "\", \"" + newUserLogin + "\", \"" + newUserPassword + "\")";

		bool created = mysql_query(this->connect, query.c_str()) == 0;  
		
		if (created)
			return true;
	}
	catch (...) {		
		mysql_close(this->connect);
		return false;
	}

	return false;
}

DataAccess * DataAccess::GetInstance()
{
	DataAccess * newDbObj = new DataAccess("root", "", "chatsocket", "127.0.0.1", 3306);
		
	return newDbObj;
}




