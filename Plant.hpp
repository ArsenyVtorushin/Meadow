#ifndef PLANT_HPP
#define PLANT_HPP	
#include "Harvest.hpp"

class Plant
{
public:	
	Plant(std::string name, std::string height, unsigned countHarvest)
		:name_(name), height_(height), countHarvest_(countHarvest)
	{
		size_ = "default";
	}

	Plant(std::string name, std::string height, std::string size, unsigned countHarvest)
		:name_(name), height_(height), size_(size), countHarvest_(countHarvest)
	{}

	void PrintInfo()const;

	virtual Harvest* GetHarvest();

	void setName(std::string name);
	void setSize(std::string size);
	void setHeight(std::string height);
	void setCountHarvest(unsigned countHarvest);

	auto getName()const->std::string;
	auto getSize()const->std::string;
	auto getHeight()const->std::string;
	auto getCountHarvest()const->unsigned;

protected:
	std::string name_;
	std::string height_;
	std::string size_;
	unsigned countHarvest_;

	Harvest* crop_;
};

class Tree : public Plant
{
public:
	Tree(std::string name, std::string height, unsigned countHarvest) :Plant(name, height, countHarvest)
	{
		size_ = "Big";
		crop_ = new Cone;
	}

	Harvest* GetHarvest() override;
};

class Bush : public Plant
{
public:
	Bush(std::string name, std::string height, unsigned countHarvest) :Plant(name, height, countHarvest)
	{
		size_ = "Small";
		crop_ = new Berry;
	}

	Harvest* GetHarvest() override;
};


#endif // !PLANT_HPP


