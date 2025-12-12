#include "Animals.h"

Animal::Animal() : type("None")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal = operator called" << std::endl;
	type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	br = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	br = new Brain(*other.br);
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	std::cout << "Dog = operator called" << std::endl;
	*br = *other.br;
	return *this;
}


std::string Dog::getIdea(int i) const{
	return br->getIdea(i);
}

void Dog::setIdea(std::string idea, size_t i)
{
	br->setIdea(idea, i);
}


Dog::~Dog()
{
	delete br;
	std::cout << "Dog default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	br = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	br = new Brain(*other.br);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	std::cout << "Cat = operator called" << std::endl;
	*br = *other.br;
	return *this;
}

std::string Cat::getIdea(int i) const{
	return br->getIdea(i);
}

void Cat::setIdea(std::string idea, size_t i)
{
	br->setIdea(idea, i);
}

Cat::~Cat()
{
	delete br;
	std::cout << "Cat default destructor called" << std::endl;
}