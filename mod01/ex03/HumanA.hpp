#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& weap;
public:
	HumanA(std::string str, Weapon& weapon);
	void attack();
	~HumanA();
};
