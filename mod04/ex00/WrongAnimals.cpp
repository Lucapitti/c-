#include "WrongAnimals.h"

WrongAnimal::WrongAnimal() : type("None")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal = operator called" << std::endl;
	type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic Wronganimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat = operator called" << std::endl;
	type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}