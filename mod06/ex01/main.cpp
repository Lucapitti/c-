#include "Serializer.hpp"

int main()
{
	Data a = {1};
	uintptr_t raw = Serializer::serialize(&a);
	Data *b = Serializer::deserialize(raw);
	std::cout << &a << b << std::endl;
}