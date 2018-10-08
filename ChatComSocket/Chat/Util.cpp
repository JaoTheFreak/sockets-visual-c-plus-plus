#include "Util.h"
#include <msclr\marshal_cppstd.h>


Util::Util()
{
}


Util::~Util()
{
}

std::string Util::ToStdString(System::String ^ toConvert)
{
	std::string toReturn = msclr::interop::marshal_as<std::string>(toConvert);

	return toReturn;
}

System::String ^ Util::ToManagedString(std::string toConvert)
{
	System::String ^toReturn = gcnew System::String(toConvert.c_str());

	return toReturn;
}

char * Util::HashThis(const char * s)
{
	const int FIRSTH = 37, A = 54059, B = 76963, C = 86969;

	unsigned h = FIRSTH;

	while (*s) {
		h = (h * A) ^ (s[0] * B);
		s++;
	}

	std::string str = std::to_string(h);

	char * c = (char *) str.c_str();

	return c;
}