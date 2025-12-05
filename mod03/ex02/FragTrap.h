#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap& operator=(const FragTrap &other);
	FragTrap(std::string new_name);
	~FragTrap();

	void	highFivesGuys(void);
};