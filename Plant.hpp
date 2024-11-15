#ifndef PLANT_HPP
#define PLANT_HPP	
#include "Harvest.hpp"

class Plant
{
public:	
	Plant(std::string name, std::string height, unsigned countHarvest)
		:name(name), height(height), countHarvest(countHarvest)
	{}

	Plant(std::string name, std::string height, std::string size, unsigned countHarvest)
		:name(name), height(height), size(size), countHarvest(countHarvest)
	{}

	void PrintInfo()const;

	virtual Harvest* GetHarvest()const;

	void setName(std::string name);
	void setSize(std::string size);
	void setHeight(std::string height);
	void setCountHarvest(unsigned countHarvest);

	auto getName()const->std::string;
	auto getSize()const->std::string;
	auto getHeight()const->std::string;
	auto getCountHarvest()const->unsigned;

protected:
	std::string name;
	std::string height;
	std::string size;

	unsigned countHarvest;
};

class Tree : public Plant
{
public:
	Tree(std::string name, std::string height, unsigned countHarvest) :Plant(name, height, countHarvest)
	{
		this->size = "Big";
	}

	Harvest* GetHarvest()const override;
};

class Bush : public Plant
{
public:
	Bush(std::string name, std::string height, unsigned countHarvest) :Plant(name, height, countHarvest)
	{
		this->size = "Small";
	}

	Harvest* GetHarvest()const override;
};


#endif // !PLANT_HPP


