#include "ScavTrap.h"

int main()
{
	ClapTrap Charlie("Charlie");
	ScavTrap Bonnie("Bonnie");
	ScavTrap Peppe("Peppe");
	Peppe = Bonnie;
	Bonnie.attack("Charlie");
	Bonnie.beRepaired(30);
	Bonnie.takeDamage(80);
	Bonnie.guardGate();
	Charlie.beRepaired(1);
}