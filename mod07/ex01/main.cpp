#include <iostream>
#include <string>
#include "iter.hpp"

void toUpper(std::string& s) {
    for (size_t i = 0; i < s.length(); i++)
        s[i] = std::toupper(s[i]);
}

int main() {

    std::cout << "=== TEST INT ===\n";
    int arrInt[] = {1, 2, 3, 4, 5};
    size_t lenInt = sizeof(arrInt) / sizeof(arrInt[0]);

    iter(arrInt, lenInt, print);
    std::cout << "\nIncremento...\n";
    iter(arrInt, lenInt, increment );
    iter(arrInt, lenInt, print);

    std::cout << "\n\n=== TEST FLOAT ===\n";
    float arrFloat[] = {1.1f, 2.2f, 3.3f};
    size_t lenFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);

    iter(arrFloat, lenFloat, print);

    std::cout << "\n\n=== TEST STRING ===\n";
    std::string arrStr[] = {"ciao", "mondo", "42"};
    size_t lenStr = sizeof(arrStr) / sizeof(arrStr[0]);

    iter(arrStr, lenStr, print);
    std::cout << "\nTo Upper...\n";
    iter(arrStr, lenStr, toUpper);
    iter(arrStr, lenStr, print);

    std::cout << "\n";

    return 0;
}
