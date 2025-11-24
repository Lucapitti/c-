#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int i = 0;
	if (N < 1)
		return (NULL);
	Zombie *head = new Zombie[N];
	while (i < N)
		head[i++].set_name(name);
	return (head);
}