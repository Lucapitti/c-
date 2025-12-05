#ifndef ANIMALS
#define ANIMALS

#include <string>
#include <iostream>
#include "Brain.h"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

class Dog : public Animal
{
	private:
		Brain *br;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

		void makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain *br;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound() const;
};

#endif
