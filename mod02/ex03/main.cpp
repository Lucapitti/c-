#include"Point.h"

int main() {
    Point a(Fixed(0), Fixed(0));
	Point b(Fixed(2), Fixed(0));
	Point c(Fixed(1), Fixed(1));

	Point p(Fixed(0.5f), Fixed(0.5f));
	if ((a - b).sign_of_vect_prod(p - b) == (a - b).sign_of_vect_prod(c - b))
	{
		if ((b - c).sign_of_vect_prod(p - c) == (b - c).sign_of_vect_prod(a - c))
		{
			if ((c - a).sign_of_vect_prod(p - a) == (c - a).sign_of_vect_prod(b - a))
			{
				std::cout << "Il punto  è nel triangolo" << std::endl;
				return 0;
			}
		}
	}
	std::cout << "Il punto non è nel triangolo" << std::endl;
	return 0;
}