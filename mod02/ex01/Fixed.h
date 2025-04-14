#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int fra_bits = 8;

public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float fp);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};


std::ostream& operator<<(std::ostream& out, const Fixed& fixed);