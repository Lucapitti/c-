#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain = operator called" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain = operator called" << std::endl;
	return *this;
}

std::string Brain::getIdea(int i) const{
	if (i < 100)
		return ideas[i];
	return 0;
}

void Brain::setIdea(std::string idea, size_t i)
{
	if (i < 100)
		ideas[i] = idea;
}


Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}
