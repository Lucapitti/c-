#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cmath>

class ClapTrap
{
private:
	std::string Name;
	unsigned int hit_points = 10;
	unsigned int Energy_points = 10;
	unsigned int attack_damage = 0;
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