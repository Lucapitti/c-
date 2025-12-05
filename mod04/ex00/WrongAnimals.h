#ifndef WRONGANIMALS
#define WRONGANIMALS

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();

	void makeSound() const;
};

#endif
