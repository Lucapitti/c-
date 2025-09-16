#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cmath>

class ClapTrap
{
public:
	std::string Name;
	unsigned int hit_points = 100;
	unsigned int Energy_points = 50;
	unsigned int attack_damage = 20;

	ClapTrap();
	ClapTrap(std::string new_name);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif