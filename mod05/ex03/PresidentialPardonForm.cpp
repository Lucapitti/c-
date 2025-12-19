#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm() : AForm("President", 5, 25), target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President", 5, 25), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : target(other.target) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm = operator overload called" << std::endl;
	if (this == &other)
		return *this;
	target = other.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (getSigned() == false)
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > getGrade_to_exec())
		throw AForm::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
