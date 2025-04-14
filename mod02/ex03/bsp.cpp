#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (b.sort_of_cross_product(point, a)*c.sort_of_cross_product(point, a) <= 0)
	{
		printf("ciao1\n");
		std::cout<<"Point not inside the triangle\n";
		return false;
	}
	if (a.sort_of_cross_product(point, b)*c.sort_of_cross_product(point, b) <= 0)
	{
		printf("ciao2\n");
		std::cout<<"Point not inside the triangle\n";
		return false;
	}
	if (b.sort_of_cross_product(point, c)*a.sort_of_cross_product(point, c) <= 0)
	{
		printf("ciao3\n");
		std::cout<<"Point not inside the triangle\n";
		return false;
	}
	std::cout<<"Point is inside the triangle\n";
	return true;
}