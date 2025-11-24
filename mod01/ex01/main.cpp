#include "Zombie.hpp"

int main()
{
	int N = 10;
	int	i = 0;

	Zombie *Norman = newZombie("Norman");
	Norman->announce();
	randomChump("Bizio");
	Zombie *horde = zombieHorde(10, "Nico");
	delete (Norman);
	while (i < N)
		horde[i++].announce();
	delete[] (horde);
}