#include "Triangle.h"

bool Triangle::isTriangle(double side1, double side2, double side3)
	{
		return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
	}
double Triangle::cosTheoremAngle(double contiguousSide1, double contiguousSide2, double oppositeSide)
	{
		return acos((contiguousSide1 * contiguousSide1 + contiguousSide2 * contiguousSide2 - oppositeSide * oppositeSide) / (2 * contiguousSide1 * contiguousSide2)) * 180 / pi;
	}
double Triangle::cosTheoremSide(double contiguousSide1, double contiguousSide2, double angle)
	{
		return sqrt(contiguousSide1 * contiguousSide1 + contiguousSide2 * contiguousSide2 - 2 * contiguousSide1 * contiguousSide2 * cos(angle));
	}

Triangle::Triangle()
	{
		sideAB = sideBC = sideAC = 4;
		angleA = angleB = angleC = 60;
	}
Triangle::Triangle(double side1, double side2, double side3)
	{
		if (isTriangle(side1, side2, side3))
		{
			sideAB = side1;
			sideAC = side2;
			sideBC = side3;
			angleA = cosTheoremAngle(sideAB, sideAC, sideBC);
			angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
			angleC = kSumOfInteriorAngels - angleA - angleB;
		}
		else
			throw "Некоректные длинны";
	}
Triangle::~Triangle()
{}
double Triangle::getSideAB()
{ return sideAB; }
void Triangle::setSideAB(double ab)
	{
		if (typeid(ab) == typeid(double))
			if (ab != cosTheoremSide(sideAC, sideBC, angleC))
				if (isTriangle(ab, sideAC, sideBC))
				{
					sideAB = ab;
					angleC = cosTheoremAngle(sideBC, sideAC, sideAB);
					angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
					angleA = kSumOfInteriorAngels - angleB - angleC;
				}
				else
					throw "Сторона слишком длинная";
			else
				return;
		else
			throw "Вы ввели не число";
	}
double Triangle::getSideBC() 
{ return sideBC; }
void Triangle::setSideBC(double bc)
	{
		if (typeid(bc) == typeid(double))
			if (bc != cosTheoremSide(sideAC, sideAB, angleA))
			{
				if (isTriangle(bc, sideAC, sideAB))
				{
					sideBC = bc;
					angleA = cosTheoremAngle(sideAC, sideAB, sideBC);
					angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
					angleC = kSumOfInteriorAngels - angleB - angleA;
				}
				else
					throw "Сторона слишком длинная";
			}
			else
				return;
		else
			throw "Вы ввели не число";
	}
double Triangle::getSideAC()
{ return sideAC; }
void Triangle::setSideAC(double ac)
	{
		if (typeid(ac) == typeid(double))
			if (ac != cosTheoremSide(sideAB, sideBC, angleB))
			{
				if (isTriangle(ac, sideBC, sideAB))
				{
					sideAC = ac;
					angleB = cosTheoremAngle(sideBC, sideAB, sideAC);
					angleA = cosTheoremAngle(sideAC, sideAB, sideBC);
					angleC = kSumOfInteriorAngels - angleB - angleA;
				}
				else
					throw "Сторона слишком длинная";
			}
			else
				return;
		else
			throw "Вы ввели не число";
	}

double Triangle::getAngleA()
{ return angleA; }
void Triangle::setAngleA(double a)
	{
		if (typeid(a) == typeid(double))
			if (a != cosTheoremAngle(sideAC, sideAB, sideBC))
				if (a > 0 && a < 180)
				{
					sideBC = cosTheoremSide(sideAC, sideAB, a);
					angleC = cosTheoremAngle(sideBC, sideAC, sideAB);
					angleB = kSumOfInteriorAngels - angleA - angleC;
				}
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}
double Triangle::getAngleB()
{ return angleB; }
void Triangle::setAngleB(double b)
	{
		if (typeid(b) == typeid(double))
			if (b != cosTheoremAngle(sideBC, sideAB, sideAC))
				if (b > 0 && b < 180)
				{
					sideAC = cosTheoremSide(sideBC, sideAB, b);
					angleA = cosTheoremAngle(sideAC, sideAB, sideBC);
					angleC = kSumOfInteriorAngels - angleA - angleB;
				}
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}
double Triangle::getAngleC()
{ return angleC; }
void Triangle::setAngleC(double c)
	{
		if (typeid(c) == typeid(double))
			if (c != cosTheoremAngle(sideBC, sideAC, sideAB))
				if (c > 0 && c < 180)
				{
					sideAB = cosTheoremSide(sideAC, sideBC, c);
					angleA = cosTheoremAngle(sideAB, sideAC, sideBC);
					angleB = kSumOfInteriorAngels - angleA - angleC;
				}
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}

