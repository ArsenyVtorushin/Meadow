#include "Plant.hpp"

void Plant::PrintInfo()const
{
	std::cout << "Name: " << this->name << "\nSize: " << this->size << "\nHeight: " << this->height << "\n\n";
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


Tree::Tree(std::string name, std::string height)
{
	this->name = name;
	this->height = height;
	this->size = "Big";
}

Bush::Bush(std::string name, std::string height)
{
	this->name = name;
	this->height = height;
	this->size = "Small";
}
