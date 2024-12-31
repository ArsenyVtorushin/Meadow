#include "Plant.hpp"

void Plant::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nSize: " << size_
		<< "\nHeight: " << height_
		<< "\nThere are " << countHarvest_ << " harvests left\n\n";
}

Harvest* Plant::GetHarvest() 
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return crop_;
	}
}

void Plant::setName(std::string name)
{
	name_ = name;
}
void Plant::setSize(std::string size)
{
	size_ = size;
}
void Plant::setHeight(std::string height)
{
	height_ = height;
}
void Plant::setCountHarvest(unsigned countHarvest)
{
	countHarvest_ = countHarvest;
}

auto Plant::getName() const -> std::string
{
	return name_;
}
auto Plant::getSize() const -> std::string
{
	return size_;
}
auto Plant::getHeight() const -> std::string
{
	return height_;
}
auto Plant::getCountHarvest() const -> unsigned
{
	return countHarvest_;
}
