#include "Animals.h"
#include "WrongAnimals.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	const WrongCat cat;
	cat.makeSound();
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound();
	wrongmeta->makeSound();
	delete wrongi;
	delete wrongmeta;
	return 0;
}
