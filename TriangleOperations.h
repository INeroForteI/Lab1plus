#pragma once
#include <iostream>
#include "TriangleOutputOperations.h"

class TriangleOperations
{
public: 
	static Triangle createTriangle();
	static void changeSide(Triangle tri);
	static void changeAngle(Triangle tri);
};

