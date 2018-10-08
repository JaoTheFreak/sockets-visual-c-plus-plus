#pragma once

#include <iostream>

class Util
{
public:
	Util();
	~Util();

	static std::string ToStdString(System::String ^ toConvert);

	static System::String^ ToManagedString(std::string toConvert);

	static unsigned HashThis(const char* s);
};

