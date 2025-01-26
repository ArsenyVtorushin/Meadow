#ifndef PLANT_HPP
#define PLANT_HPP	
#include "Harvest.hpp"
#define STR_SIZE (size_ == Size::Default ? "Default" : (size_ == Size::Big ? "Big" : (size_ == Size::Medium ? "Medium" : "Small")))
#define STR_HEIGHT (height_ == Height::Default ? "Default" : (height_ == Height::Tall ? "Tall" : (height_ == Height::Medium ? "Medium" : "Short")))

// Все классы и перечисления приложения можно запихнуть 
// в одно пространство имен, чтобы, если будут создаваться
// какие-то методы с одним и тем же названием, можно будет 
// избежать ошибок
//

namespace mdw
{
	// Здесь очень удобно применить перечисление,
	// т.к. хранить размер или высоту или вес (как в Harvest) 
	// как string не совсем правильно
	//

	enum class Size
	{
		Default, Big, Medium, Small
	};

	enum class Height
	{
		Default, Tall, Medium, Short
	};



	class aPlant
	{
	public:
		aPlant(std::string name, Height height, unsigned countHarvest)
			:name_(name), height_(height), countHarvest_(countHarvest)
		{
			size_ = Size::Default;

			berry_ = new Berry;
			fruit_ = new Fruit;
			cone_ = new Cone;
		}

		aPlant(std::string name, Size size, Height height, unsigned countHarvest)
			:name_(name), size_(size), height_(height), countHarvest_(countHarvest)
		{
			berry_ = new Berry;
			fruit_ = new Fruit;
			cone_ = new Cone;
		}

		void PrintInfo();

		virtual Harvest* GetHarvest() = 0;

		void setName(std::string name);
		void setSize(Size size);
		void setHeight(Height height);
		void setCountHarvest(unsigned countHarvest);

		auto getName()const->std::string;
		auto getSize()const->Size;
		auto getHeight()const->Height;
		auto getCountHarvest()const->unsigned;

	protected:
		std::string name_;
		Size size_;
		Height height_;
		unsigned countHarvest_;

		Berry* berry_;
		Fruit* fruit_;
		Cone* cone_;
	};




	class aTree :public aPlant
	{
	public:
		aTree(std::string name, Height height, unsigned countHarvest) :aPlant(name, height, countHarvest)
		{
			size_ = Size::Big;
		}
	};



	class AppleTree :public aTree
	{
	public:
		AppleTree(std::string name, Height height, unsigned countHarvest) :aTree(name, height, countHarvest)
		{
			fruit_->setName("Apple");
		}

		Harvest* GetHarvest() override;
	};



	class PearTree :public aTree
	{
	public:
		PearTree(std::string name, Height height, unsigned countHarvest) :aTree(name, height, countHarvest)
		{
			fruit_->setName("Pear");
		}

		Harvest* GetHarvest() override;
	};



	class CherryTree :public aTree
	{
	public:
		CherryTree(std::string name, Height height, unsigned countHarvest) :aTree(name, height, countHarvest)
		{
			berry_->setName("Cherry");
		}

		Harvest* GetHarvest() override;
	};




	class aBush :public aPlant
	{
	public:
		aBush(std::string name, Height height, unsigned countHarvest) :aPlant(name, height, countHarvest)
		{
			size_ = Size::Small;
		}
	};



	class RaspberryBush :public aBush
	{
	public:
		RaspberryBush(std::string name, Height height, unsigned countHarvest) :aBush(name, height, countHarvest)
		{
			berry_->setName("Raspberry");
		}

		Harvest* GetHarvest() override;
	};



	class BlueberryBush :public aBush
	{
	public:
		BlueberryBush(std::string name, Height height, unsigned countHarvest) :aBush(name, height, countHarvest)
		{
			berry_->setName("Blueberry");
		}

		Harvest* GetHarvest() override;
	};



	class CurrantBush :public aBush
	{
	public:
		CurrantBush(std::string name, Height height, unsigned countHarvest) :aBush(name, height, countHarvest)
		{
			berry_->setName("Currant");
		}

		Harvest* GetHarvest() override;
	};
}





#endif // !PLANT_HPP