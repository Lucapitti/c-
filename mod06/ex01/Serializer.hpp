#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdint>

typedef struct Data
{
	int i;
} Data;


class Serializer
{
private:
	Serializer();
public:
	Serializer(const Serializer &other);
	Serializer &operator=(const Serializer &other);
	static void convert(std::string literal);
	class InvalidFormatException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	~Serializer();
};