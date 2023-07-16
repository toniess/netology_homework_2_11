#include "Greeter.h"

namespace friendship {

	std::string Greeter::greet(std::string name) const noexcept
	{
		return "Здравствуйте, " + name + "!";
	}

}