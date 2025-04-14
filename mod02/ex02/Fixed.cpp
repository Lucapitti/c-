#include "Fixed.h"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : value(integer << fra_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fp)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(fp*(1<<fra_bits));
}

Fixed::Fixed(const Fixed& other) : value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->value = other.value;
	}
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout<< "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member funciont called" <<std::endl;
	value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)value/ (1 << fra_bits));
}

int Fixed::toInt(void) const
{
	return ((value /(1 << fra_bits)));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
