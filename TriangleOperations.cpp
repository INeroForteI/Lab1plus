#include "TriangleOperations.h"

Triangle TriangleOperations::createTriangle()
{
	double side1;
	double side2;
	double side3;
	std::cout << "Введите стороны треугольника через ENTER" << std::endl;
	std::cin >> side1;
	std::cin >> side2;
	std::cin >> side3;
	return Triangle(side1, side2, side3);
}
void TriangleOperations::changeAngle(Triangle tri)
{
	std::cout << "Какой из углов вы хотите изменить?" << std::endl;
	std::cout << "1 - угол А" << std::endl;
	std::cout << "2 - угол B" << std::endl;
	std::cout << "3 - угол C" << std::endl;
	char key;
	std::cin >> key;
	std::cout << "Введите новое значение угла:" << std::endl;
	double newValue;
	std::cin >> newValue;
	switch (key)
	{
	case '1':
		tri.setAngleA(newValue);
		break;
	case '2':
		tri.setAngleB(newValue);
		break;
	case '3':
		tri.setAngleC(newValue);
		break;
	default:
		std::cout << "Вы ввели некоректный ключ" << std::endl;
		return;
	}
	TriangleOutputOperations::outputFull(tri);
}
void TriangleOperations::changeSide(Triangle tri)
{
	std::cout << "Какую из сторон вы хотите изменить?" << std::endl;
	std::cout << "1 - сторону АB" << std::endl;
	std::cout << "2 - сторону AC" << std::endl;
	std::cout << "3 - сторону BC" << std::endl;
	char key;
	std::cin >> key;
	std::cout << "Введите новое значение стороны:" << std::endl;
	double newValue;
	std::cin >> newValue;
	switch (key)
	{
	case '1':
		tri.setSideAB(newValue);
		break;
	case '2':
		tri.setSideAC(newValue);
		break;
	case '3':
		tri.setSideBC(newValue);
		break;
	default:
		std::cout << "Вы ввели некоректный ключ" << std::endl;
		return;
	}
	TriangleOutputOperations::outputFull(tri);
}
