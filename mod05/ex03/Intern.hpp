#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string key[3];
	AForm* (*funcs[3])(std::string target);

	static AForm* createShrubbery(std::string target);
    static AForm* createRobotomy(std::string target);
    static AForm* createPresidential(std::string target);
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
	~Intern();

	AForm *makeForm(std::string name, std::string target) const;
};