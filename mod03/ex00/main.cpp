#include "ClapTrap.h"

int main()
{
	ClapTrap Charlie("Charlie");
	Charlie.attack("Bobby");
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(2);
	Charlie.beRepaired(4);
	Charlie.takeDamage(40);
	Charlie.attack("Gigi");
	Charlie.beRepaired(4);
	Charlie.takeDamage(20);
	Charlie.attack("Gigi");
	Charlie.beRepaired(1);
}