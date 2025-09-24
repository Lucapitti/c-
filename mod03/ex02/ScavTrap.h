#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	ScavTrap(std::string new_name);
	~ScavTrap();
	void	guardGate();
	void 	attack(const std::string& target);
};