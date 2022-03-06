#include "ConsoleMenu.h"
void ConsoleMenu::comands(Triangle tri)
{
	char key;
	std::cin >> key;
	switch (key)
	{
	case '1':
		TriangleOperations::changeSide(tri);
		outputMenu(tri);
		break;
	case '2':
		TriangleOperations::changeAngle(tri);
		outputMenu(tri);
		break;
	case '3':
		TriangleOutputOperations::outputFull(tri);
		outputMenu(tri);
		break;
	case '4':
		outputMenu(TriangleOperations::createTriangle());
		break;
	case '5':
		system("cls");
		outputMenu(tri);
		break;
	case '6':
		return;
	default:
		std::cout << "�� ����� ����������� ����" << std::endl;
	}
}
void ConsoleMenu::outputMenu(Triangle tri)
{
	std::cout << "1 - �������� �������" << std::endl;
	std::cout << "2 - �������� ����" << std::endl;
	std::cout << "3 - ������� ���������" << std::endl;
	std::cout << "4 - ������� ����� �����������" << std::endl;
	std::cout << "5 - �������� �������" << std::endl;
	std::cout << "6 - ��������� ������" << std::endl;
	comands(tri);
}
