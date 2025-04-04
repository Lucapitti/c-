#include "Zombie.hpp"

int main()
{
	Zombie *Norman = newZombie("Norman");
	Norman->announce();
	randomChump("Bizio");
	delete (Norman);
}