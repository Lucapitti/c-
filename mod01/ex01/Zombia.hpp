#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:

		void announce(void) {
			std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
		}

};
