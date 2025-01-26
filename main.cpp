#include "Plant.hpp"


// ѕространства имен (namespace) - компонент €зыка, который содержит 
// набор компонентов (функций, классов и т.д.) и имеет 
// некоторое им€, которое прикрепл€етс€ к каждому 
// компоненту из этого пространства имЄн.
// 
// ѕространства имЄн нужны, чтобы не путать 
// данные одного пространства с другими, например, если в 
// исходном коде определены две функции с одним названием, 
// но в разных пространствах. омпил€тор различит их по пространствам, 
// которым они принадлежат.
// 
// namespace MyNamespace
// {
//     //...
// }
// 
// ѕеречислени€ (enum) - компонент €зыка, который позвол€ет создать
// набор именованных констант, которые нумеруютс€ автоматически или вручную
// 
// enum class MyEnum
// {
//		//... через зап€тую перечисл€ем константы
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