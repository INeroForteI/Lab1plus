#include "TriangleOutputOperations.h"

void TriangleOutputOperations::outputAngles(Triangle triangle)
{
    std::cout << triangle.getAngleA() << ' ' << triangle.getAngleB() << ' ' << triangle.getAngleC() << std::endl;
}
void TriangleOutputOperations::outputSides(Triangle triangle)
{
    std::cout << triangle.getSideAB() << ' ' << triangle.getSideAC() << ' ' << triangle.getSideBC() << std::endl;
}
