#include "Animals.h"
#include "Brain.h"

#define L 4

int main()
{
	Animal *zoo[L];
	for (int i = 0; i < L; i++)
	{
		if (i < L/2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < L; i++)
		delete zoo[i];

	std::cout<<std::endl<<"Test deep copy"<<std::endl<<std::endl;

	Dog basic;
	basic.setIdea("ciao", 1);
	{
		Dog tmp;
		tmp = basic;
	}
	std::cout << basic.getIdea(1) << std::endl;

}
