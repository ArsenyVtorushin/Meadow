#include "Plant.hpp"

void mdw::aPlant::PrintInfo()
{
	std::cout
		<< "Name: " << name_
		<< "\nSize: " << STR_SIZE
		<< "\nHeight: " << STR_HEIGHT
		<< "\nThere are " << countHarvest_ << " harvests left\n\n";
}



void mdw::aPlant::setName(std::string name)
{
	name_ = name;
}
void mdw::aPlant::setSize(Size size)
{
	size_ = size;
}
void mdw::aPlant::setHeight(Height height)
{
	height_ = height;
}
void mdw::aPlant::setCountHarvest(unsigned countHarvest)
{
	countHarvest_ = countHarvest;
}




auto mdw::aPlant::getName() const -> std::string
{
	return name_;
}
auto mdw::aPlant::getSize() const -> Size
{
	return size_;
}
auto mdw::aPlant::getHeight() const -> Height
{
	return height_;
}
auto mdw::aPlant::getCountHarvest() const -> unsigned
{
	return countHarvest_;
}



mdw::Harvest* mdw::AppleTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return fruit_;
	}
}



mdw::Harvest* mdw::PearTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return fruit_;
	}
}



mdw::Harvest* mdw::CherryTree::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}



mdw::Harvest* mdw::RaspberryBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}



mdw::Harvest* mdw::BlueberryBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}



mdw::Harvest* mdw::CurrantBush::GetHarvest()
{
	if (countHarvest_ > 0)
	{
		countHarvest_--;
		return berry_;
	}
}
