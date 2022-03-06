#include "TriangleOperations.h"

Triangle TriangleOperations::createTriangle()
{
	double side1;
	double side2;
	double side3;
	std::cout << "������� ������� ������������ ����� ENTER" << std::endl;
	std::cin >> side1;
	std::cin >> side2;
	std::cin >> side3;
	return Triangle(side1, side2, side3);
}
void TriangleOperations::changeAngle(Triangle tri)
{
	std::cout << "����� �� ����� �� ������ ��������?" << std::endl;
	std::cout << "1 - ���� �" << std::endl;
	std::cout << "2 - ���� B" << std::endl;
	std::cout << "3 - ���� C" << std::endl;
	char key;
	std::cin >> key;
	std::cout << "������� ����� �������� ����:" << std::endl;
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
		std::cout << "�� ����� ����������� ����" << std::endl;
		return;
	}
	TriangleOutputOperations::outputFull(tri);
}
void TriangleOperations::changeSide(Triangle tri)
{
	std::cout << "����� �� ������ �� ������ ��������?" << std::endl;
	std::cout << "1 - ������� �B" << std::endl;
	std::cout << "2 - ������� AC" << std::endl;
	std::cout << "3 - ������� BC" << std::endl;
	char key;
	std::cin >> key;
	std::cout << "������� ����� �������� �������:" << std::endl;
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
		std::cout << "�� ����� ����������� ����" << std::endl;
		return;
	}
	TriangleOutputOperations::outputFull(tri);
}
