#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>
# include <string> 

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string input);
		void set_name(std::string new_name);
		~Zombie();

		void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif