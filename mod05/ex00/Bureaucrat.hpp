#include <string>
#include <iostream>

class  Bureaucrat
{
private:
	const std::string name;
	size_t grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int i);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~ Bureaucrat();

	class GradeTooHigh : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLow : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	void incrementGrade();
	void decrementGrade();
	std::string getName() const;
	int getGrade() const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& fixed);
