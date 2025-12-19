#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 137, 145), target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 137, 145), target(target)
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

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (getSigned() == false)
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > getGrade_to_exec())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	file.open((target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("Could not open file!");
	file << "        ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\\\////\n         |||/\\ \n         ||\\/\n         |||||\n   .....//||||\\....." << std::endl;
	file.close();
}
