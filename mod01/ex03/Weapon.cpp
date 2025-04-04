#include "Weapon.hpp"

Weapon::Weapon(std::string set)
{
	type = set;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}

const std::string& Weapon::getType()
{
	return (type);
}

Weapon::~Weapon(){}