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
