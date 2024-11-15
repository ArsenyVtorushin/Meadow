#include "Plant.hpp"

void Plant::PrintInfo()const
{
	std::cout
		<< "Name: " << this->name
		<< "\nSize: " << this->size
		<< "\nHeight: " << this->height
		<< "\nThere are " << this->countHarvest << " harvests left\n\n";
}

Harvest* Plant::GetHarvest() const
{
	Harvest* crop();
	return crop;
}

void Plant::setName(std::string name)
{
	this->name = name;
}
void Plant::setSize(std::string size)
{
	this->size = size;
}
void Plant::setHeight(std::string height)
{
	this->height = height;
}
void Plant::setCountHarvest(unsigned countHarvest)
{
	this->countHarvest = countHarvest;
}

auto Plant::getName() const -> std::string
{
	return this->name;
}
auto Plant::getSize() const -> std::string
{
	return this->size;
}
auto Plant::getHeight() const -> std::string
{
	return this->height;
}
auto Plant::getCountHarvest() const -> unsigned
{
	return this->countHarvest;
}

Harvest* Tree::GetHarvest() const
{
	Cone* crop;
	return crop;
}

Harvest* Bush::GetHarvest() const
{
	Berry* crop;
	return crop;
}
