#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *ret = new Zombie(name);
	ret->next = 0;
	return (ret);
}