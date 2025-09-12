#include "Point.h"

Point::Point() : x(0), y(0)
{
	//std::cout<<"Default constructor called\n";
}

Point::Point(const Fixed& new_x, const Fixed& new_y) : x(new_x), y(new_y)
{
	//std::cout<<"Point constructor called\n";
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
	//std::cout<<"Copy assignment operator called\n";
}


Point::~Point()
{
	//std::cout << "Default destructor called\n";
}

Point Point::operator-(const Point& other) const
{
	Point result(this->x - other.x, this->y - other.y);
	return (result);
}

int Point::sign_of_vect_prod(Point b)
{
	std::cout << this->x * b.y - this->y * b.x << std::endl;
	if (this->x * b.y - this->y * b.x > 0)
		return 1;
	if (this->x * b.y - this->y * b.x == 0)
		return 0;
	return -1;
}