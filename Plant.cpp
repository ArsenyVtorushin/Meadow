#include "Plant.hpp"

void aPlant::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nSize: " << STR_SIZE
		<< "\nHeight: " << STR_HEIGHT
		<< "\nThere are " << countHarvest_ << " harvests left\n\n";
}



void aPlant::setName(std::string name)
{
	name_ = name;
}
void aPlant::setSize(Size size)
{
	size_ = size;
}
void aPlant::setHeight(Height height)
{
	height_ = height;
}
void aPlant::setCountHarvest(unsigned countHarvest)
{
	countHarvest_ = countHarvest;
}

auto aPlant::getName() const -> std::string
{
	return name_;
}
auto aPlant::getSize() const -> Size
{
	return size_;
}
auto aPlant::getHeight() const -> Height
{
	return height_;
}
auto aPlant::getCountHarvest() const -> unsigned
{
	return countHarvest_;
}


Harvest* AppleTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return fruit_;
	}
}


Harvest* PearTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return fruit_;
	}
}


Harvest* CherryTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}


Harvest* RaspberryBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}


Harvest* BlueberryBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}


Harvest* CurrantBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}
