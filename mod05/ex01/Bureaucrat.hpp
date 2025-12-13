#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <string>
#include <iostream>

class Form;

class  Bureaucrat
{
private:
	const std::string name;
	size_t grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, size_t i);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~ Bureaucrat();

	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	void incrementGrade();
	void decrementGrade();
	std::string getName() const;
	size_t  getGrade() const;
	void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& fixed);

#endif
