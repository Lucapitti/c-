#include "Animals.h"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
}

void Animal::makeSound()
{
	std::cout << "Generic animal sound" << std::endl;
}

std::string Animal::getType()
{
	return this->type;
}

Animal::~Animal()
{
}



void Dog::makeSound()
{
	std::cout << "Bark" << std::endl;
}