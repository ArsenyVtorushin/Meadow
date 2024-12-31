#ifndef HARVEST_HPP
#define HARVEST_HPP
#include <iostream>
#include <string>
#include <vector>

class Harvest
{
public:
	Harvest() :name_("Harvest"), weight_("Default") {}

	Harvest(std::string weight)
		:name_("Harvest"),
		weight_(weight)
	{}

	Harvest(std::string name, std::string weight)
		:name_(name),
		weight_(weight)
	{}

	void PrintInfo();

	void setName(std::string name);
	void setWeight(std::string weight);

	auto getName()const->std::string;
	auto getWeight()const->std::string;

protected:
	std::string name_;
	std::string weight_;
};

class Berry : public Harvest
{
public:
	Berry()
	{
		name_ = "Berry";
		weight_ = "Light";
	}
	Berry(std::string weight)
	{
		name_ = "Berry";
		weight_ = weight;
	}
};

class Fruit : public Harvest
{
public:
	Fruit()
	{
		name_ = "Fruit";
		weight_ = "Heavy";
	}
	Fruit(std::string weight)
	{
		name_ = "Fruit";
		weight_ = weight;
	}
};

class Cone : public Harvest
{
public:
	Cone()
	{
		name_ = "Cone";
		weight_ = "Medium";
	}
	Cone(std::string weight)
	{
		name_ = "Cone";
		weight_ = weight;
	}
};

#endif // !HARVEST_HPP



