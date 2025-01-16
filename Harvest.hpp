#ifndef HARVEST_HPP
#define HARVEST_HPP
#include <iostream>
#include <string>
#include <vector>
#define STR_WEIGHT (weight_ == Weight::Default ? "Default" : (weight_ == Weight::Heavy ? "Heavy" : (weight_ == Weight::Medium ? "Medium" : "Light")))

enum class Weight
{
	Default, Heavy, Medium, Light
};



class Harvest
{
public:
	Harvest() :name_("Harvest"), weight_(Weight::Default) {}

	Harvest(Weight weight)
		:name_("Harvest"),
		weight_(weight)
	{}

	Harvest(std::string name, Weight weight)
		:name_(name),
		weight_(weight)
	{}

	void PrintInfo();

	void setName(std::string name);
	void setWeight(Weight weight);

	auto getName()const->std::string;
	auto getWeight()const->Weight;

protected:
	std::string name_;
	Weight weight_;
};



class Berry : public Harvest
{
public:
	Berry()
	{
		name_ = "Berry";
		weight_ = Weight::Default;
	}
	Berry(Weight weight)
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
		weight_ = Weight::Default;
	}
	Fruit(Weight weight)
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
		weight_ = Weight::Default;
	}
	Cone(Weight weight)
	{
		name_ = "Cone";
		weight_ = weight;
	}
};

#endif // !HARVEST_HPP



