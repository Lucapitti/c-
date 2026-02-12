#include <iostream>

template <typename T>

void increment(T& a)
{
	a += 1;
}

template <typename T>

void print(const T& a)
{
	std::cout << a << " ";
}

template <typename T>

void iter(T* array, size_t len, void(*func)(T&))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>

void iter(const T* array, size_t len, void(*func)(const T&))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}