#include "windows.h"
#include <iostream>
#include "TriangleOutputOperations.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Triangle tri(30, 60, 60);
        tri.setSideBC(89.9);
        TriangleOutputOperations::outputAngles(tri);
        TriangleOutputOperations::outputSides(tri);
    }
    catch(const char *str)
    {
        std::cout << str << std::endl;
    }
    Sleep(45000);
}

