#include "ClapTrap.h"

ClapTrap::ClapTrap() : Name("default"), hit_points(10), Energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : Name(new_name), hit_points(10), Energy_points(10), attack_damage(0)
{
	std::cout << "Constructor called for "<< Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for "<< this->Name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->Energy_points)
	{
		std::cout << this->Name << " cannot attack due to no energy points" << std::endl;
		return ;
	}
	if (!this->hit_points)
	{
		std::cout << this->Name << " cannot attack due to no hit points" << std::endl;
		return ;
	}
	std::cout << this->Name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << this->Name << " is already at 0 hitpoints" << std::endl;
		return ;
	}
	if (this->hit_points <= amount)
	{
		this->hit_points = 0;
		std::cout << this->Name << " took " << amount << " of damage and unfortunatly reached 0 hitpoints" << std::endl;
		return ;
	}
	this->hit_points -= amount;
	std::cout << this->Name << " took " << amount << " of damage and is now at " << this->hit_points << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->Energy_points)
	{
		std::cout << this->Name << " cannot repair itself due to no energy points" << std::endl;
		return ;
	}
	if (!this->hit_points)
	{
		std::cout << this->Name << " cannot repair itself due to no hit points" << std::endl;
		return ;
	}
	this->hit_points += amount;
	this->Energy_points--;
	std::cout << this->Name << " regained " << amount << " hit points and is not at "<< this->hit_points<<" hit points" << std::endl;
}