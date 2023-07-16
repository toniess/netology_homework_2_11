#pragma once

#include <iostream>
namespace friendship {

	class Greeter {
	public:
		std::string greet(std::string name) const noexcept;
	};

}