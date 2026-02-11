#pragma once

#include <string>
#include <iostream>
#include <float.h>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
private:
	ScalarConverter();
public:
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	static void convert(std::string literal);
	class InvalidFormatException : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	~ScalarConverter();
};
