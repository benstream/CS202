//Lab 11 Benjamin Stream CS202
#pragma once
#include <string>
#include <iostream>

class Lab11 {
public:
	Lab11();
	~Lab11();
	Lab11(const std::string& newFavorite);
	std::string readColor();

private:
	std::string _favorite_color = "Red";
};


Lab11::Lab11(const std::string& newFavorite) :_favorite_color(newFavorite)
{
	std::cout << "Base Constructor with params!" << std::endl;
	_favorite_color = newFavorite;
}

std::string Lab11::readColor()
{
	return _favorite_color;
}

Lab11::Lab11()
{
	std::cout << "Base Constructor!" << std::endl;

}

Lab11::~Lab11()
{
	std::cout << "Base destructor!" << std::endl;
}


class Lab11Derrived :public Lab11 {
public:
	Lab11Derrived();
	Lab11Derrived(std::string color, std::string food);
	~Lab11Derrived();
	std::string readFood();

private:
	std::string _favorite_food;
};



Lab11Derrived::Lab11Derrived()
{
	std::cout << "Derrived Constructor!" << std::endl;
}

Lab11Derrived::Lab11Derrived(std::string color, std::string food) :Lab11(color), _favorite_food(food)
{
	std::cout << "Derrived Constructor with Params!" << std::endl;



}

Lab11Derrived::~Lab11Derrived()
{
	std::cout << "Derrived destructor!" << std::endl;
}

std::string Lab11Derrived::readFood()
{
	return _favorite_food;
}



int main() {

	//{Lab11();}
	{Lab11 John("Purple");

	std::cout << John.readColor() << std::endl; }


	//{Lab11Derrived();}
	{Lab11Derrived Billy("Red", "Apples");
	std::cout << Billy.readColor() << " " << Billy.readFood()<< std::endl; }
}