#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), sign(false), grade_to_exec(150), grade_to_sign(150)
{
}

AForm::AForm(std::string new_name, size_t i, size_t j) : name(new_name), sign(false), grade_to_exec(j), grade_to_sign(i)
{
	if (i > 150)
		throw AForm::GradeTooLowException();
	else if (i < 1)
		throw AForm::GradeTooHighException();
	if (j > 150)
		throw AForm::GradeTooLowException();
	else if (j < 1)
		throw AForm::GradeTooHighException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::AFormAlreadySigned::what() const throw()
{
	return ("Form is already signed");
}

const char *AForm::AFormNotSigned::what() const throw()
{
	return ("Form is not signed");
}

AForm::AForm(const AForm& other) : name(other.name), grade_to_exec(other.grade_to_exec), grade_to_sign(other.grade_to_sign)
{
}

AForm& AForm::operator=(const AForm& other)
{
	if (this == &other)
		return *this;
	sign = other.sign;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const AForm &i) {
	if (i.getSigned() == true)
		out <<  "AForm " << i.getName() << " is signed, the grade to sign and the grade to execute are respectively: " << i.getGrade_to_sign() << " and " << i.getGrade_to_exec() << std::endl;
	if (i.getSigned() == false)
		out <<  "AForm " << i.getName() << " is not signed, the grade to sign and the grade to execute are respectively: " << i.getGrade_to_sign() << " and " << i.getGrade_to_exec() << std::endl;
	return out;
}

std::string AForm::getName() const
{
	return name;
}

bool AForm::getSigned() const
{
	return sign;
}

size_t AForm::getGrade_to_sign() const
{
	return grade_to_sign;
}

size_t AForm::getGrade_to_exec() const
{
	return grade_to_exec;
}

void AForm::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() > grade_to_sign)
		throw AForm::GradeTooLowException();
	if (sign == true)
		throw AForm::AFormAlreadySigned();
	sign = true;
}

AForm::~AForm()
{
}
