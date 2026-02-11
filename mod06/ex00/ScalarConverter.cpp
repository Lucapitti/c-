#include "ScalarConverter.hpp"
#define MAX_INT 2147483647
#define MIN_INT -2147483648

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
}

const char *ScalarConverter::InvalidFormatException::what() const throw()
{
	return("Invalid format, impossible to convert to any variable type");
}

void	from_char(char c)
{
	int i = c;
	float f = i;
	double d = i;
	std::cout << "\nint: " << i << "\nchar: " << c << std::fixed << std::setprecision(1) <<  "\nfloat: " << f << "f\ndouble: " << d << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void	from_float(float f)
{
	if (f >= MIN_INT && f <= MAX_INT)
	{
		int i = static_cast<int>(round(f));
		std::cout << "int: " << i << std::endl;
		if (i >= 0 && i <= 255)
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
	}
	if (std::isinf(f) || std::isnan(f))
		std::cout << "float: " << f << "f" << std::endl;
	if (f == std::floorf(f))
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f\ndouble: " << static_cast<double>(f) << std::endl;
}

void	from_double(double d)
{
	if (d >= MIN_INT && d <= MAX_INT) {
		int i = static_cast<int>(round(d));
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		if (i >= 0 && i <= 255)
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else {
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
	}
	if (std::isinf(d) || std::isnan(d))
		std::cout << "float: " << d << "f" << std::endl;
	else if (d >= FLT_MIN && d <= FLT_MAX)
	{
		if (d == std::floor(d))
			std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << d << "f" << std::endl;
	}
	else
		std::cout << "float: impossible\n";
	std::cout << "double: " << d << std::endl;
}

void	from_int(int i)
{
	std::cout << "int: " << i << std::endl;
	if (i >= 0 && i <= 255)
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f\ndouble: " << static_cast<double>(i) << std::endl;
	std::cout.unsetf(std::ios::fixed);
}


void ScalarConverter::convert(std::string literal)
{
	size_t len = literal.size();

	if (len == 1) {
		from_char(literal[0]);
		return ;
	}
	if (literal == "nan" || literal == "+inf" || literal == "-inf") {
		from_double(std::stod(literal));
		return ;
	}
	if (literal == "nanf" || literal == "+inff" || literal == "-inff") {
		from_float(std::stof(literal));
		return ;
	}
	for (size_t i = 0; i < len - 1; i++)
	{
		if ((literal[i] == '-' || literal[i] == '+') && i == 0)
			i++;
		else if ((literal[i] < '0' || literal[i] > '9') && literal[i] != '.')
			throw ScalarConverter::InvalidFormatException();
	}
	if (literal.find_first_of('.') != literal.find_last_of('.') || literal.find_first_of('.') == len - 1 || (literal.find_first_of('.') == len - 2 && literal[len - 1] == 'f') || literal.find_first_of('.') == 0)
		throw ScalarConverter::InvalidFormatException();
	if (literal[len - 1] == 'f' && literal.find_first_of('.') != std::string::npos)
		from_float(std::stof(literal));
	else if (literal.find_first_of('.') != std::string::npos)
		from_double(std::stod(literal));
	else {
		try
		{
			from_int(std::stoi(literal));
		}
		catch(const std::exception& e)
		{
			throw ScalarConverter::InvalidFormatException();
		}
	}
}