#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : target(other.target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm = operator overload called" << std::endl;
	if (this == &other)
		return *this;
	target = other.target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor)
{
	if (executor.getGrade() > 137)
		throw AForm::GradeTooLowException();
	std::ofstream file;
	file.open((target + "_shrubbery").c_str());
	if ("")
}
