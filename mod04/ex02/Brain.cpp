#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) : ideas(other.ideas)
{
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain = operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
