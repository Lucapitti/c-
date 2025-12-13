#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    std::cout << "===== TEST 1: Creazione Form valida =====\n";
    try {
        Form f1("Modulo A", 50, 25);
        std::cout << f1 << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 2: Form con grade troppo alto =====\n";
    try {
        Form f2("Modulo B", 0, 50); // troppo alto
    } catch (std::exception &e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 3: Form con grade troppo basso =====\n";
    try {
        Form f3("Modulo C", 50, 200); // troppo basso
    } catch (std::exception &e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 4: Firma valida =====\n";
    try {
        Bureaucrat b1("Alice", 40);
        Form f4("Modulo D", 50, 25);

        std::cout << b1 << std::endl;
        std::cout << f4 << std::endl;

        b1.signForm(f4); // deve riuscire
        std::cout << f4 << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 5: Firma NON valida (grado troppo basso) =====\n";
    try {
        Bureaucrat b2("Bob", 100);
        Form f5("Modulo E", 50, 25);

        b2.signForm(f5); // deve fallire
    } catch (std::exception &e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 6: Firma diretta con beSigned() =====\n";
    try {
        Bureaucrat b3("Charlie", 30);
        Form f6("Modulo F", 25, 10);
        f6.beSigned(b3); // deve fallire
    } catch (std::exception &e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 7: Firma multipla =====\n";
    try {
        Bureaucrat boss("Boss", 1);
        Form f7("Modulo Segreto", 1, 1);

        boss.signForm(f7);
        boss.signForm(f7); // già firmato
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
