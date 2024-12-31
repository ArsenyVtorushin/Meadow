#include "Plant.hpp"

/*
 ������� ����� �������� ��� ������ ����� � ���� ����������:
	- ��������
	- ������
	- ������
 � �������� ������ ���� ���������� � ���� ������ � ��������
 ��� ����� ���������, ������� �������

 -----------------------------

 ������� ����� ������. ����� ������ ����� ���� �������� � ���
 ������� ���������� ������ � ���� ����, �������, �����

 ��������� ������� ����� �������� �������, ������� ���������� ����� �� ���������,
 ����� ������� ������ ���������� ��������� ����� ������

 � � ����������� �������� ������� � ������ ����� ������ �������
 ���������� �������, ���� ��� �����
*/

int main()
{
	Tree tree("Alexey", "short", 10);
	Bush bush("Bob", "middle", 7);

	char choose;
	do
	{
		tree.PrintInfo();
		bush.PrintInfo();

		std::cout << tree.getName() << "'s harvest:\n";
		tree.GetHarvest()->PrintInfo();

		std::cout << bush.getName() << "'s harvest\n";
		bush.GetHarvest()->PrintInfo();

		do
		{
			std::cout << "\nChoose:\n  1. Show\n  0. Quit\n";
			std::cin >> choose;
		} while (choose < 48 || choose > 49);

	} while (choose != 48);

	return 0;
}