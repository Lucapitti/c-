#include "Zombie.hpp"

Zombie::Zombie(std::string input) : name(input)
{
	std::cout << "A new zombie is arising, his name is " << name << std::endl;
}

Zombie::~Zombie(){
	std::cout << name << " is being destroyed into pieces"<< std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}