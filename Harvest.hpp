#ifndef HARVEST_HPP
#define HARVEST_HPP
#include <iostream>
#include <string>
#include <vector>

class Harvest
{
public:
	Harvest() = default;

	Harvest(std::string weight)
		:weight(weight)
	{}

	Harvest(std::string name, std::string weight)
		:name(name),
		weight(weight)
	{}

	void setName(std::string name);
	void setWeight(std::string weight);

	auto getName()const->std::string;
	auto getWeight()const->std::string;

protected:
	std::string name;
	std::string weight;
};

class Berry : public Harvest
{
public:
	Berry(std::string weight) :Harvest(weight)
	{
		this->name = "Berry";
	}
};

class Fruit : public Harvest
{
public:
	Fruit(std::string weight) :Harvest(weight)
	{
		this->name = "Fruit";
	}
};

class Cone : public Harvest
{
public:
	Cone(std::string weight) :Harvest(weight)
	{
		this->name = "Cone";
	}
};

#endif // !HARVEST_HPP



