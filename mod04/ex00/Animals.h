#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	void makeSound();
	std::string getType();
	~Animal();
};

class Dog : public Animal
{
public:
	Dog();
	void makeSound();
	~Dog();
};
