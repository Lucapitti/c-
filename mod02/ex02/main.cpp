#include"Fixed.h"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    Fixed c (a);
    if (c == a)
        std::cout<< "ciao" << std::endl;
    std::cout << c-- << " ora vale "<< c << " ora varrá "<< --c << std::endl;
    std::cout << b << " = b vale a = " << a << " a + b = "<< b + a << std::endl;
    return 0;
}