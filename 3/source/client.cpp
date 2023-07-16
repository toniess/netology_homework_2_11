#include <iostream>
#include "leaver.h"
#include "windows.h"

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    friendship::Leaver l;
    std::string name;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << l.leave(name) << std::endl;
}