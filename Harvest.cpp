#include "Harvest.hpp"

void Harvest::setName(std::string name)
{
	this->name = name;
}
void Harvest::setWeight(std::string weight)
{
	this->weight = weight;
}

auto Harvest::getName() const -> std::string
{
	return this->name;
}
auto Harvest::getWeight() const -> std::string
{
	return this->weight;
}
