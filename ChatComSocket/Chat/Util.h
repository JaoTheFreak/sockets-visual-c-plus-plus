#pragma once

#include <iostream>

static class Util
{
public:
	Util();
	~Util();

	static std::string ToStdString(System::String ^ toConvert);

	static System::String^ ToManagedString(std::string toConvert);
};

