#include "Inherit.hpp"


Base* generate(void)
{
	short i = rand() % 3;
	if (i == 0)
	{
		std::cout<<"Generated type is A\n";
		return new A;
	}
	else if (i == 1)
	{
		std::cout<<"Generated type is B\n";
		return new B;
	}
	std::cout<<"Generated type is C\n";
	return new C;
}

void identify(Base* p)
{
	A* der1 = dynamic_cast<A*>(p);
	if (p == der1)
		std::cout << "It's memeber of the A class\n";
	B* der2 = dynamic_cast<B*>(p);
	if (p == der2)
		std::cout << "It's memeber of the B class\n";
	C* der3 = dynamic_cast<C*>(p);
	if (p == der3)
		std::cout << "It's memeber of the C class\n";
}

void identify(Base& p)
{
	A* der1 = dynamic_cast<A*>(&p);
	if (&p == der1)
		std::cout << "It's memeber of the A class\n";
	B* der2 = dynamic_cast<B*>(&p);
	if (&p == der2)
		std::cout << "It's memeber of the B class\n";
	C* der3 = dynamic_cast<C*>(&p);
	if (&p == der3)
		std::cout << "It's memeber of the C class\n";
}

int main()
{
	srand(time(0));
	Base *ran = generate();
	identify(ran);
	identify(*ran);
	delete ran;
}