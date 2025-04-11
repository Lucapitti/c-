#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)(void)>::iterator it = complaintMap.find(level);
	if (it != complaintMap.end())
		(this->*(it->second))();
	else
		std::cout<<"Probably complaining about something else"<<std::endl;
	
}
Harl::Harl(){
	complaintMap["info"] = &Harl::info;
	complaintMap["debug"] =  &Harl::debug;
	complaintMap["warning"] = &Harl::warning;
	complaintMap["error"] = &Harl::error;
}