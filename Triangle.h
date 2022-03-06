#pragma once
#include <typeinfo>
#include <cmath>

class Triangle
{
private:

	double sideAB;
	double sideBC;
	double sideAC;
	double angleA;
	double angleB;
	double angleC;
	const double kSumOfInteriorAngels = 180;
	const double pi = 3.141592;

	bool isTriangle(double side1, double side2, double side3);
	double cosTheoremAngle(double contiguousSide1, double contiguousSide2, double oppositeSide);
	double cosTheoremSide(double contiguousSide1, double contiguousSide2, double angle);

public:
	~Triangle();
	Triangle();
	Triangle(double side1, double side2, double side3);

	double getSideAB();
	void setSideAB(double ab);
	double getSideBC();
	void setSideBC(double bc);
	double getSideAC();
	void setSideAC(double ac);

	double getAngleA();
	void setAngleA(double a);
	double getAngleB();
	void setAngleB(double b);
	double getAngleC();
	void setAngleC(double c);
};
