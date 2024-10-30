#include "Plant.hpp"

void Plant::PrintInfo()const
{
	std::cout
		<< "Name: " << this->name
		<< "\nSize: " << this->size
		<< "\nHeight: " << this->height
		<< "\nThere are " << this->countHarvest << " harvests left\n\n";
}

auto Plant::Harvest() -> Harvest*
{
	if (this->countHarvest > 0)
	{
		return &this->crop;
		this->countHarvest--;
	}
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

auto Tree::Harvest() -> Harvest*
{
	if (this->countHarvest > 0)
	{
		return &this->crop;
		this->countHarvest--;
	}
}

auto Bush::Harvest() -> Harvest*
{
	if (this->countHarvest > 0)
	{
		return &this->crop;
		this->countHarvest--;
	}
}
