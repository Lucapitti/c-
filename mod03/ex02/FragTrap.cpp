#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap ()
{
	this->attack_damage = 30;
	this->hit_points = 100;
	this->energy_points = 100;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.Name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap = operator called" << std::endl;
	if (this == &other)
		return *this;
	this->Name = other.Name;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
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
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey lets high five guys!!" << std::endl;
}