#include <iostream>
#include "ConsoleMenu.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        ConsoleMenu::outputMenu(TriangleOperations::createTriangle());
    }
    catch(const char *str)
    {
        std::cout << str << std::endl;
    }
}

