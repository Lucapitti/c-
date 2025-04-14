#include "Fixed.h"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const Fixed& new_x, const Fixed& new_y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	float sort_of_cross_product(const Point& other, const Point& start) const;
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);