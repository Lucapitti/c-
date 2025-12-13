#ifndef FORM
#define FORM

#include <string>
#include <iostream>

class Bureaucrat;

class  AForm
{
private:
	const std::string 	name;
	bool				sign;
	const size_t		grade_to_exec;
	const size_t 		grade_to_sign;
public:
	AForm();
	AForm(std::string name, size_t i, size_t j);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm() = 0;

	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class AFormAlreadySigned : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	std::string getName() const;
	bool 		getSigned() const;
	size_t 		getGrade_to_sign() const;
	size_t 		getGrade_to_exec() const;
	void beSigned(const Bureaucrat& signer);
};

std::ostream& operator<<(std::ostream& out, const AForm& fixed);

#endif