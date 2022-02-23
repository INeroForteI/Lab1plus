#include <iostream>
#include "Triangle.cpp"
class TriangleOutputOperations
{
public:
    static void outputAngles(Triangle triangle)
    {
        std::cout << triangle.getAngleA() << ' ' << triangle.getAngleB() << ' ' << triangle.getAngleC() << std::endl;
    }
    static void outputSides(Triangle triangle)
    {
        std::cout << triangle.getSideAB() << ' ' << triangle.getSideAC() << ' ' << triangle.getSideBC() << std::endl;
    }
};