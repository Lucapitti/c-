#ifndef FORM
#define FORM

#include <string>
#include <iostream>

class Bureaucrat;

class  Form
{
private:
	const std::string 	name;
	bool				sign;
	const size_t		grade_to_exec;
	const size_t 		grade_to_sign;
public:
	Form();
	Form(std::string name, size_t i, size_t j);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~ Form();

	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class FormAlreadySigned : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	std::string getName() const;
	bool 		getSigned() const;
	size_t 		getGrade_to_sign() const;
	size_t 		getGrade_to_exec() const;
	void beSigned(const Bureaucrat& signer);
};

std::ostream& operator<<(std::ostream& out, const Form& fixed);

#endif