#ifndef PLANT_HPP
#define PLANT_HPP	
#include <iostream>
#include <string>

class Plant
{
public:	
	void PrintInfo()const;

	void setName(std::string name);
	void setSize(std::string size);
	void setHeight(std::string height);

	auto getName()const->std::string;
	auto getSize()const->std::string;
	auto getHeight()const->std::string;

protected:
	std::string name;
	std::string size;
	std::string height;
};

class Tree : public Plant
{
public:
	Tree(std::string name, std::string height);
};

class Bush : public Plant
{
public:
	Bush(std::string name, std::string height);
};


#endif // !PLANT_HPP


