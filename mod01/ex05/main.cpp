#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- Testing Harl's Complaints ---" << std::endl;
    
    harl.complain("info");
    harl.complain("debug");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("random"); // Should print the default message

    return 0;
}