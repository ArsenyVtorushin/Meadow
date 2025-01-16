#include "Harvest.hpp"

void Harvest::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nWeight: " << STR_WEIGHT << "\n\n";
}



void Harvest::setName(std::string name)
{
	name_ = name;
}
void Harvest::setWeight(Weight weight)
{
	weight_ = weight;
}

auto Harvest::getName() const -> std::string
{
	return name_;
}
auto Harvest::getWeight() const -> Weight
{
	return weight_;
}
