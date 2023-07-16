#include <iostream>
#include "leaver.h"

namespace friendship
{
	std::string Leaver::leave(std::string name) const
	{
		return "До свидания, " + name + "!";
	}
}