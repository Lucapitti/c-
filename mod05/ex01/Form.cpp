#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), sign(false), grade_to_exec(150), grade_to_sign(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string new_name, size_t i, size_t j) : name(new_name), sign(false), grade_to_exec(j), grade_to_sign(i)
{
	if (i > 150)
		throw Form::GradeTooLowException();
	else if (i < 1)
		throw Form::GradeTooHighException();
	if (j > 150)
		throw Form::GradeTooLowException();
	else if (j < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form constructor called for " << new_name << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high to sign document");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low to sign document");
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return ("The form is already signed");
}

Form::Form(const Form& other) : name(other.name), grade_to_exec(other.grade_to_exec), grade_to_sign(other.grade_to_sign)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return *this;
	std::cout << "Form = operator called" << std::endl;
	sign = other.sign;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Form &i) {
	if (i.getSigned() == true)
		out <<  "Form " << i.getName() << " is signed, the grade to sign and the grade to execute are respectively: " << i.getGrade_to_sign() << " and " << i.getGrade_to_exec() << std::endl;
	if (i.getSigned() == false)
		out <<  "Form " << i.getName() << " is not signed, the grade to sign and the grade to execute are respectively: " << i.getGrade_to_sign() << " and " << i.getGrade_to_exec() << std::endl;
	return out;
}

std::string Form::getName() const
{
	return name;
}

bool Form::getSigned() const
{
	return sign;
}

size_t Form::getGrade_to_sign() const
{
	return grade_to_sign;
}

size_t Form::getGrade_to_exec() const
{
	return grade_to_exec;
}

void Form::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() > grade_to_sign)
		throw Form::GradeTooLowException();
	if (sign == true)
		throw Form::FormAlreadySigned();
	sign = true;
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}
