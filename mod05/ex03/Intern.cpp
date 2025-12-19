#include "Intern.hpp"

Intern::Intern() {
	key[0] = "Shrubbery Creation";
	key[1] = "Robotomy request";
	key[2] = "Presidential pardon";
	funcs[0] = &Intern::createShrubbery;
	funcs[1] = &Intern::createRobotomy;
	funcs[2] = &Intern::createPresidential;
}

Intern::~Intern() {}

Intern::Intern(const Intern& other) {
	key[0] = other.key[0];
	key[1] = other.key[1];
	key[2] = other.key[2];
	funcs[0] = other.funcs[0];
	funcs[1] = other.funcs[1];
	funcs[2] = other.funcs[2];
}

Intern& Intern::operator=(const Intern& other)
{
	if (this == &other)
		return (*this);
	key[0] = other.key[0];
	key[1] = other.key[1];
	key[2] = other.key[2];
	funcs[0] = other.funcs[0];
	funcs[1] = other.funcs[1];
	funcs[2] = other.funcs[2];
	return *this;
}

AForm* Intern::createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}


AForm *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == key[i])
		{
			std::cout<<"Intern creates " << name << std::endl;
			return (funcs[i](target));
		}
	}
	std::cout<<"Intern creates " << name << std::endl;
	return 0;
}