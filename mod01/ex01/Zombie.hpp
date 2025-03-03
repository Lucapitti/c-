#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string input);
		~Zombie();

		void announce(void);
};
