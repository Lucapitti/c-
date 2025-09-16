#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string new_name);
	~ScavTrap();
	void	guardGate();
	void 	attack(const std::string& target);
};