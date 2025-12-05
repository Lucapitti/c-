#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
	this->attack_damage = 30;
	this->hit_points = 100;
	this->energy_points = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap = operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->attack_damage = 30;
	this->hit_points = 100;
	this->energy_points = 100;
	std::cout << "FragTrap Constructor called for " << this->Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << Name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey lets high five guys!!" << std::endl;
}