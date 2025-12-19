#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 45, 72), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 45, 72), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : target(other.target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm = operator overload called" << std::endl;
	if (this == &other)
		return *this;
	target = other.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (getSigned() == false)
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > getGrade_to_exec())
		throw AForm::GradeTooLowException();
	int i = rand()%2;
	if (i)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout<<"Robotomy has failed"<<std::endl;
}
