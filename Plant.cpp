#include "Plant.hpp"

void Plant::PrintInfo()const
{
	std::cout
		<< "Name: " << this->name_
		<< "\nSize: " << this->size_
		<< "\nHeight: " << this->height_
		<< "\nThere are " << this->countHarvest_ << " harvests left\n\n";
}

Harvest* Plant::GetHarvest() 
{
	return crop_;
}

void Plant::setName(std::string name)
{
	this->name_ = name;
}
void Plant::setSize(std::string size)
{
	this->size_ = size;
}
void Plant::setHeight(std::string height)
{
	this->height_ = height;
}
void Plant::setCountHarvest(unsigned countHarvest)
{
	this->countHarvest_ = countHarvest;
}

auto Plant::getName() const -> std::string
{
	return this->name_;
}
auto Plant::getSize() const -> std::string
{
	return this->size_;
}
auto Plant::getHeight() const -> std::string
{
	return this->height_;
}
auto Plant::getCountHarvest() const -> unsigned
{
	return this->countHarvest_;
}
