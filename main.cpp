#include "Plant.hpp"

int main()
{
	AppleTree appleTree("Bob", Height::Tall, 40);
	CherryTree cherryTree("Martin", Height::Medium, 50);
	CurrantBush currantBush("James", Height::Short, 20);

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