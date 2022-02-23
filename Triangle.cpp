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
	const double sumOfInteriorAngels = 180;
	const double pi = 3.141592;

	bool isTriangle(double side1, double side2, double side3)
	{
		return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
	}
	double cosTheoremAngle(double contiguousSide1, double contiguousSide2, double oppositeSide)
	{
		return acos((contiguousSide1 * contiguousSide1 + contiguousSide2 * contiguousSide2 - oppositeSide * oppositeSide) / (2 * contiguousSide1 * contiguousSide2)) * 180 / pi;
	}
	double cosTheoremSide(double contiguousSide1, double contiguousSide2, double angle)
	{
		return sqrt(contiguousSide1 * contiguousSide1 + contiguousSide2 * contiguousSide2 - 2 * contiguousSide1 * contiguousSide2 * cos(angle));
	}

public:
	Triangle()
	{
		sideAB = sideBC = sideAC = 4;
		angleA = angleB = angleC = 60;
	}
	Triangle(double side1, double side2, double side3)
	{
		if (isTriangle(side1, side2, side3))
		{
			sideAB = side1;
			sideAC = side2;
			sideBC = side3;
			angleA = cosTheoremAngle(sideAB, sideAC, sideBC);
			angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
			angleC = sumOfInteriorAngels - angleA - angleB;
		}
		else
			throw "Некоректные длинны";
	}
	double getSideAB() { return sideAB; }
	void setSideAB(double ab)
	{
		if (typeid(ab) == typeid(double))
			if (ab != cosTheoremSide(sideAC, sideBC, angleC))
				if (isTriangle(ab, sideAC, sideBC))
				{
					sideAB = ab;
					angleC = cosTheoremAngle(sideBC, sideAC, sideAB);
					angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
					angleA = sumOfInteriorAngels - angleB - angleC;
				}
				else
					throw "Сторона слишком длинная";
			else
				return;
		else
			throw "Вы ввели не число";
	}
	double getSideBC() { return sideBC; }
	void setSideBC(double bc)
	{
		if (typeid(bc) == typeid(double))
			if (bc != cosTheoremSide(sideAC, sideAB, angleA))
			{
				if (isTriangle(bc, sideAC, sideAB))
				{
					sideBC = bc;
					angleA = cosTheoremAngle(sideAC, sideAB, sideBC);
					angleB = cosTheoremAngle(sideAB, sideBC, sideAC);
					angleC = sumOfInteriorAngels - angleB - angleA;
				}
				else
					throw "Сторона слишком длинная";
			}
			else
				return;
		else
			throw "Вы ввели не число";
	}
	double getSideAC() { return sideAC; }
	void setSideAC(double ac)
	{
		if (typeid(ac) == typeid(double))
			if (ac != cosTheoremSide(sideAB, sideBC, angleB))
			{
				if (isTriangle(ac, sideBC, sideAB))
				{
					sideAC = ac;
					angleB = cosTheoremAngle(sideBC, sideAB, sideAC);
					angleA = cosTheoremAngle(sideAC, sideAB, sideBC);
					angleC = sumOfInteriorAngels - angleB - angleA;
				}
				else
					throw "Сторона слишком длинная";
			}
			else
				return;
		else
			throw "Вы ввели не число";
	}

	double getAngleA() { return angleA; }
	void setAngleA(double a)
	{
		if (typeid(a) == typeid(double))
			if (a != cosTheoremAngle(sideAC, sideAB, sideBC))
				if (a > 0 && a < 180)
					setSideBC(cosTheoremSide(sideAC, sideAB, a));
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}
	double getAngleB() { return angleB; }
	void setAngleB(double b)
	{
		if (typeid(b) == typeid(double))
			if (b != cosTheoremAngle(sideBC, sideAB, sideAC))
				if (b > 0 && b < 180)
					setSideAC(cosTheoremSide(sideBC, sideAB, b));
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}
	double getAngleC() { return angleC; }
	void setAngleC(double c)
	{
		if (typeid(c) == typeid(double))
			if (c != cosTheoremAngle(sideBC, sideAC, sideAB))
				if (c > 0 && c < 180)
					setSideAB(cosTheoremSide(sideAC, sideBC, c));
				else
					throw "Некоректный угол";
			else
				return;
		else
			throw "Вы ввели не число";
	}
};
