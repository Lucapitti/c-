#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout<< name << " attacks with their " << weap.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon& weapon) : name(str), weap(weapon)
{
}

HumanA::~HumanA(){}