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
		std::cout << "Вы ввели некоректный ключ" << std::endl;
	}
}
void ConsoleMenu::outputMenu(Triangle tri)
{
	std::cout << "1 - Изменить сторону" << std::endl;
	std::cout << "2 - Изменить угол" << std::endl;
	std::cout << "3 - Вывести параметры" << std::endl;
	std::cout << "4 - Создать новый треугольник" << std::endl;
	std::cout << "5 - Очистить консоль" << std::endl;
	std::cout << "6 - Завершить работу" << std::endl;
	comands(tri);
}
