#include <string>
#include <iostream>
#include <map>

class Harl
{
	private:
		std::string complaints[4];
		void (Harl::*funcs[4])();
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		void complain( std::string level );
		~Harl();
};