#include "Zombie.hpp"

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie(){
	std::cout << "currently destroying " << name << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}