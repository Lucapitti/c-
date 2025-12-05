#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cmath>

class ClapTrap
{
protected:
	std::string Name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	ClapTrap(std::string new_name);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif