#include"Fixed.h"

int main() {
    // Test constructors
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    
    a = Fixed(1234.4321f);

    std::cout << a / b << " (a / b)\n";
    
    return 0;
}