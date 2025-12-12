#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string new_name, unsigned int i) : name(new_name)
{
	std::cout << "Bureaucrat constructor called for " << new_name << std::endl;
	if (i > 150)
		throw Bureaucrat::GradeTooLow();
	else if (i < 1)
		throw Bureaucrat::GradeTooHigh();
	grade = i;
}

const char *Bureaucrat::GradeTooHigh::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLow::what() const throw()
{
	return ("Grade too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat = operator called" << std::endl;
	if (this == &other)
		return *this;
	grade = other.grade;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &i) {
	out << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return out;
}

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHigh();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLow();
	grade++;
}


std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}
