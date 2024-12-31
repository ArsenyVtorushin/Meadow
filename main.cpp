#include "Plant.hpp"

/*
 Создать класс растений они должны знать о себе информацию:
	- название
	- размер
	- высоту
 у растений должны быть наследники в виде кустов и деревьев
 все кусты маленькие, деревья большие

 -----------------------------

 создать класс плодов. Плоды должны знать свое название и вес
 создать наследники плодов в виде ягод, фруктов, шишек

 дополнить базовый класс деревьем методом, который возвращает плоды по указателю,
 полем которое хранит кольчество возможных сбору плодов

 а в наследниках растений описать в методе сбора плодов возврат
 конкретных фруктов, ягод или шишек
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