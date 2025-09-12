#include "Fixed.h"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point operator-(const Point& other) const;
	Point(const Fixed& new_x, const Fixed& new_y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	int	sign_of_vect_prod(Point b);
	~Point();
};