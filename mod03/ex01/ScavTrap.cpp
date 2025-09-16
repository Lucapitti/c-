#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string new_name)
{
	this->Name = new_name;
	std::cout << "ScavaTrap Constructor called for "<< this->Name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in Gate Keeper mode" << std::endl;
	this->Energy_points--;
}

void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap "<< this->Name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->Energy_points--;
}