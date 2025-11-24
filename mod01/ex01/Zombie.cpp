#include "Zombie.hpp"

Zombie::Zombie(std::string input) : name(input)
{
	std::cout << "A new zombie is arising, his name is " << name << std::endl;
}

Zombie::Zombie() : name("default")
{
	std::cout << "A new zombie is arising, his name is " << name << std::endl;
}

void Zombie::set_name(std::string new_name)
{
	this->name = new_name;
}

Zombie::~Zombie(){
	std::cout << name << " is being destroyed into pieces"<< std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}