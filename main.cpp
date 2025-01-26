#include "Plant.hpp"


// ������������ ���� (namespace) - ��������� �����, ������� �������� 
// ����� ����������� (�������, ������� � �.�.) � ����� 
// ��������� ���, ������� ������������� � ������� 
// ���������� �� ����� ������������ ���.
// 
// ������������ ��� �����, ����� �� ������ 
// ������ ������ ������������ � �������, ��������, ���� � 
// �������� ���� ���������� ��� ������� � ����� ���������, 
// �� � ������ �������������.���������� �������� �� �� �������������, 
// ������� ��� �����������.
// 
// namespace MyNamespace
// {
//     //...
// }
// 
// ������������ (enum) - ��������� �����, ������� ��������� �������
// ����� ����������� ��������, ������� ���������� ������������� ��� �������
// 
// enum class MyEnum
// {
//		//... ����� ������� ����������� ���������
// }
// 
//





int main()
{
	mdw::AppleTree appleTree("Bob", mdw::Height::Tall, 40);
	mdw::CherryTree cherryTree("Martin", mdw::Height::Medium, 50);
	mdw::CurrantBush currantBush("James", mdw::Height::Short, 20);

	char choose;
	do
	{
		appleTree.PrintInfo();
		cherryTree.PrintInfo();
		currantBush.PrintInfo();

		std::cout << appleTree.getName() << "'s harvest:\n";
		appleTree.GetHarvest()->PrintInfo();

		std::cout << cherryTree.getName() << "'s harvest\n";
		cherryTree.GetHarvest()->PrintInfo();

		std::cout << currantBush.getName() << "'s harvest\n";
		currantBush.GetHarvest()->PrintInfo();

		do
		{
			std::cout << "\nChoose:\n  1. Show\n  0. Quit\n";
			std::cin >> choose;
		} while (choose < 48 || choose > 49);
	} while (choose != 48);

	return 0;
}