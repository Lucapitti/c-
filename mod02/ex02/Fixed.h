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
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator++(int);
	Fixed& operator++(void);
	Fixed operator--(int);
	Fixed& operator--(void);

	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);