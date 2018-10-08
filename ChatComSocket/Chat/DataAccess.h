
#pragma once

#include <mysql.h>
#include <iostream>

/// <summary>
/// Classe para acessar o banco de dados
/// </summary>
public class DataAccess
{
	private:
		std::string _userDb;
		std::string _passwordDb;
		std::string _dataBaseName;
		std::string _serverAddress;
		unsigned int _port;
		MYSQL * connect;

	private:
		DataAccess(std::string userName, std::string userPassword, std::string databaseName, 
			std::string serverIp, unsigned int serverPort);

	public:
		DataAccess();
		~DataAccess();

		bool CreateNewUser(std::string newUserName, std::string newUserPassword, std::string newUserLogin);

		static DataAccess * GetInstance();
};

