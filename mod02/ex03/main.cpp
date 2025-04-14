#include"Point.h"

int main() {
    Point a(Fixed(0), Fixed(0));
	Point b(Fixed(2), Fixed(0));
	Point c(Fixed(1), Fixed(1));

	Point p(Fixed(0.5f), Fixed(1));
	bsp(a, b, c, p);
}