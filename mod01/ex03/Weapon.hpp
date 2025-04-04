#ifndef WEAPON
# define WEAPON
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string type;

	public:
	Weapon(std::string input);
	const std::string& getType();
	void setType(std::string new_type);
	~Weapon();
};
#endif