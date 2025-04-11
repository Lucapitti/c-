#include <string>
#include <iostream>
#include <map>

class Harl
{
	private:
    std::map<std::string, void (Harl::*)(void)> complaintMap;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public:
	Harl();
	void complain( std::string level );
};