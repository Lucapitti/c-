#include "phone_book.hpp"
#include <limits>

PhoneBook::PhoneBook(){
	counter = 0;
}

void PhoneBook::addContact(){
	phone_book[counter % 8].setContact();
	counter++;
}

int getline_int()
{
	std::string input;
	int i = 0;
	int ret = 0;
	std::getline(std::cin, input);
	if (std::cin.eof())
			exit(0);
	if (input[0] == '+')
		i++;
	if (input.length() - i > 1)
		return (-1);
	return (input[i] - '0');
}

void PhoneBook::searchContact(){
	if (counter <= 0)
		return ;
	int count = 0;
	while (count < 8 && count < counter)
	{
		std::cout << "|" << std::setw(10) << std::right << count + 1;
		std::cout << "|";
		if (phone_book[(counter - 1 - count)%8].name.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[(counter - 1 - count)%8].name;
		else
			std::cout << std::setw(9) << std::right << phone_book[(counter - 1 - count)%8].name.substr(0, 9) << ".";
		std::cout << "|";
		if (phone_book[(counter - 1 - count)%8].last_name.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[(counter - 1 - count)%8].last_name;
		else
			std::cout << std::setw(9) << std::right << phone_book[(counter - 1 - count)%8].last_name.substr(0, 9) << ".";
		std::cout << "|";
		if (phone_book[(counter - 1 - count)%8].nickname.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[(counter - 1 - count)%8].nickname;
		else
			std::cout << std::setw(9) << std::right << phone_book[(counter - 1 - count)%8].nickname.substr(0, 9) << ".";
		std::cout << "|\n";
		count++;
	}
	count = 9;
	while (1)
	{
		std::cout << "Enter desired index: ";
		count = getline_int();
		if (count > counter || count < 1 || count > 8)
		{
			if (counter	< 7)
				std::cout << "Invalid input, enter a valid index (1, " << counter << ")" << std::endl;
			else
				std::cout << "Invalid input, enter a valid index (1, 8)" << std::endl;
		}
		else
			break;
	}
	phone_book[count - 1].print();
}

PhoneBook::~PhoneBook(){};