#include "HumanB.hpp"

void HumanB::attack()
{
	if (weap != NULL)
		std::cout<< name << " attacks with their " << weap->getType() << std::endl;
	else
		std::cout << name<< " attack with their fists cause it doesn't have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& new_weap)
{
	weap = &new_weap;
}

HumanB::HumanB(std::string str)
{
	name = str;
	weap = NULL;
}

HumanB::~HumanB(){}