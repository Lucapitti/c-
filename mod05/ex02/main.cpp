#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    AForm *forms[3];
    forms[0] = new ShrubberyCreationForm("home");
    forms[1] = new RobotomyRequestForm("Clown");
    forms[2] = new PresidentialPardonForm("Billy");

    Bureaucrat a("Adolfo", 3);
    Bureaucrat b("Rodolfo", 150);
    for (int i = 0; i < 3; i++)
    {
        a.signForm(*forms[i]);
        a.executeForm(*forms[i]);
        b.signForm(*forms[i]);
        b.executeForm(*forms[i]);
    }
    for (int i = 0; i < 3; i++)
        delete forms[i];
    return 0;
}
