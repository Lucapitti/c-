#include "Intern.hpp"

int main()
{
    Intern ciao;
    AForm *forms[3];
    forms[0] = ciao.makeForm("Robotomy request", "trump");
    forms[1] = ciao.makeForm("Presidential pardon", "trump");
    forms[2] = ciao.makeForm("Shrubbery Creation", "for");

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
