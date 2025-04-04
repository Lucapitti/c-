#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int i = 1;
	if (N < 1)
		return (NULL);
	Zombie *head = new Zombie(name);
	head->announce();
	head->next = NULL;
	Zombie *horde = head;
	while (i < N)
	{
		horde->next = new Zombie(name);
		horde->announce();
		horde = horde->next;
		i++;
	}
	horde->next = 0;
	return (head);
}