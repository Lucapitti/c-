#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap ()
{
	this->attack_damage = 30;
	this->hit_points = 100;
	this->Energy_points = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->attack_damage = 30;
	this->hit_points = 100;
	this->Energy_points = 100;
	std::cout << "FragTrap Constructor called for " << this->Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey lets high five guys!!" << std::endl;
}