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

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.value = this->value + other.value;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.value = this->value - other.value;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	long long int product = (long long int)this->value * (long long int) other.value;
	result.value = product >> fra_bits;
	return(result);
}

Fixed Fixed::operator/(const Fixed& other) const { //non lo so vabbè o 123.441 o 123.445 la media non funziona nemmeno
    if (other.value == 0) throw std::runtime_error("Division by zero");
	Fixed result;
	float float_div = this->toFloat() / other.toFloat();

// Fixed-point division (using integer arithmetic)
	int64_t fixed_div_raw = ((int64_t)this->value << fra_bits) / other.value;
	float fixed_div_float = fixed_div_raw / (float)(1 << fra_bits);  // Convert back to float

// Average the two methods
	float mean = (float_div + fixed_div_float) * 0.5f;

// Convert back to fixed-point
	result.value = roundf(mean * (1 << fra_bits));
	return(result);
}

bool Fixed::operator==(const Fixed& other) const
{
	if (this->value == other.value)
		return (true);
	return(false);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->value != other.value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->value <= other.value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->value < other.value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->value >= other.value)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->value > other.value)
		return (true);
	return (false);
}

Fixed& Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	this->value += 1;
	return (old);
}

Fixed& Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	this->value -= 1;
	return (old);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed&a, Fixed&b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed&a, Fixed&b)
{
	if (a < b)
		return (a);
	return (b);
}