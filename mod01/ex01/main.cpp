#include "Zombie.hpp"

int main()
{
	int N = 10;
	int	i = 0;

	Zombie *horde = zombieHorde(10, "Nico");
	while (i < N)
		horde[i++].announce();
	delete[] (horde);
}