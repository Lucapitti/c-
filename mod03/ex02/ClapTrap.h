#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cmath>

class ClapTrap
{
public:
	std::string Name;
	unsigned int hit_points;
	unsigned int Energy_points;
	unsigned int attack_damage;

	ClapTrap();
	ClapTrap(std::string new_name);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif