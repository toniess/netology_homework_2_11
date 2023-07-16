#include <iostream>
#include <windows.h>
#include "greeter.h"

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	friendship::Greeter g;
	std::string name;

	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << g.greet(name) << std::endl;
}