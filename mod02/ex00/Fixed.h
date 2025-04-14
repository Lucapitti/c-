#include <iostream>

class Fixed
{
private:
	int value;
	static const int fra_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);
};
