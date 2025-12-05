#include "ClapTrap.h"

ClapTrap::ClapTrap() : Name("default"), attack_damage(0), hit_points(10), energy_points(10)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : Name(other.Name), attack_damage(0), hit_points(10), energy_points(10)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap = operator called" << std::endl;
	if (this == &other)
		return *this;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
	return *this;
}

ClapTrap::ClapTrap(std::string new_name) : Name(new_name), attack_damage(0), hit_points(10), energy_points(10)
{
	std::cout << "ClapTrap constructor called for "<< Name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for "<< this->Name << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << this->Name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
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
	if (!this->energy_points)
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
	this->energy_points--;
	std::cout << this->Name << " regained " << amount << " hit points and is now at "<< this->hit_points<<" hit points" << std::endl;
}