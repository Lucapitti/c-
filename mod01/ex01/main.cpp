#include "Zombie.hpp"

int main()
{
	Zombie *Norman = newZombie("Norman");
	Norman->announce();
	randomChump("Bizio");
	Zombie *horde = zombieHorde(10, "Nico");
	delete (Norman);
	Zombie *tmp = horde;
	while (horde)
	{
		tmp = horde->next;
		delete horde;
		horde = tmp;
	}
}