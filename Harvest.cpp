#include "Harvest.hpp"

void Harvest::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nWeight: " << weight_ << "\n\n";
}

void Harvest::setName(std::string name)
{
	name_ = name;
}
void Harvest::setWeight(std::string weight)
{
	weight_ = weight;
}

auto Harvest::getName() const -> std::string
{
	return name_;
}
auto Harvest::getWeight() const -> std::string
{
	return weight_;
}
