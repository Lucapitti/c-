#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap()  {
	std::cout << "ScavTrap default constructor called" << std::endl;
	energy_points = 50;
	hit_points = 100;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	energy_points = 50;
	hit_points = 100;
	attack_damage = 20; 
	std::cout << "ScavTrap Constructor called for "<< this->Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.Name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap = operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for "<< Name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->Name << " is now in Gate Keeper mode" << std::endl;
	this->energy_points--;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!this->energy_points)
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
	this->energy_points--;
}