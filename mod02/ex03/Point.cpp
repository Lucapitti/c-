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

float Point::sort_of_cross_product(const Point& other, const Point& start) const
{
	return(((x - start.x)*(other.y - start.y) - (other.x - start.x)*(y - start.y)).toFloat());
}

Point::~Point()
{
	//std::cout << "Default destructor called\n";
}
