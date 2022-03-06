#pragma once
#include <iostream>
#include "Triangle.h"

class TriangleOutputOperations
{
private:
    static void outputAngles(Triangle triangle);
    static void outputSides(Triangle triangle);
   
public:
    static void outputFull(Triangle Triangle);
};