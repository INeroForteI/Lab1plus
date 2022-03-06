#include "TriangleOutputOperations.h"

void TriangleOutputOperations::outputAngles(Triangle triangle)
{
    std::cout << "”глы треугольника в градусах:" << std::endl;
    std::cout << "A: " << triangle.getAngleA() << " B: " << triangle.getAngleB() << " C: " << triangle.getAngleC() << std::endl;
}
void TriangleOutputOperations::outputSides(Triangle triangle)
{
    std::cout << "ƒлины сторон треугольника:" << std::endl;
    std::cout << "AB = " << triangle.getSideAB() << " AC = " << triangle.getSideAC() << " BC = " << triangle.getSideBC() << std::endl;
}
void TriangleOutputOperations::outputFull(Triangle triangle)
{
    TriangleOutputOperations::outputSides(triangle);
    TriangleOutputOperations::outputAngles(triangle);
}