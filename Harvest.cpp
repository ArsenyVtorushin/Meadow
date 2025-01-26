#include "Harvest.hpp"

void mdw::Harvest::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nWeight: " << STR_WEIGHT << "\n\n";
}



void mdw::Harvest::setName(std::string name)
{
	name_ = name;
}
void mdw::Harvest::setWeight(Weight weight)
{
	weight_ = weight;
}



auto mdw::Harvest::getName() const -> std::string
{
	return name_;
}
auto mdw::Harvest::getWeight() const -> Weight
{
	return weight_;
}
