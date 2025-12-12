#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "---- TEST 1: Creazione valida ----\n";
    try {
        Bureaucrat a("Mario", 42);
        std::cout << a << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---- TEST 2: Grade troppo alto (< 1) ----\n";
    try {
        Bureaucrat b("Luigi", 0);   // deve lanciare GradeTooHighException
    } catch (std::exception &e) {
        std::cerr << "Eccezione catturata: " << e.what() << std::endl;
    }

    std::cout << "\n---- TEST 3: Grade troppo basso (> 150) ----\n";
    try {
        Bureaucrat c("Peach", 200); // deve lanciare GradeTooLowException
    } catch (std::exception &e) {
        std::cerr << "Eccezione catturata: " << e.what() << std::endl;
    }

    std::cout << "\n---- TEST 4: Incrementazione valida ----\n";
    try {
        Bureaucrat d("Toad", 10);
        std::cout << d << std::endl;

        d.incrementGrade();
        std::cout << "Dopo increment: " << d << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---- TEST 5: Increment oltre il limite ----\n";
    try {
        Bureaucrat e("Bowser", 1);
        std::cout << e << std::endl;

        e.incrementGrade(); // deve lanciare GradeTooHighException
    } catch (std::exception &e) {
        std::cerr << "Eccezione catturata: " << e.what() << std::endl;
    }

    std::cout << "\n---- TEST 6: Decrement oltre il limite ----\n";
    try {
        Bureaucrat f("Yoshi", 150);
        std::cout << f << std::endl;

        f.decrementGrade(); // deve lanciare GradeTooLowException
    } catch (std::exception &e) {
        std::cerr << "Eccezione catturata: " << e.what() << std::endl;
    }

    return 0;
}