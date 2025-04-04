#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weap;
public:
	HumanB(std::string str);
	void setWeapon(Weapon& new_weap);
	void attack();
	~HumanB();
};