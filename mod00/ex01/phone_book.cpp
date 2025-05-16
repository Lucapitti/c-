#include "phone_book.hpp"
#include <limits>

PhoneBook::PhoneBook(){
	counter = 0;
}

void PhoneBook::addContact(){
	phone_book[counter % 8].setContact();
	counter++;
}

void PhoneBook::searchContact(){
	if (counter <= 0)
		return ;
	int i = 0;
	while (i < counter && i < 8)
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		std::cout << "|";
		if (phone_book[i].name.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[i].name;
		else
			std::cout << std::setw(9) << std::right << phone_book[i].name.substr(0, 9) << ".";
		std::cout << "|";
		if (phone_book[i].last_name.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[i].last_name;
		else
			std::cout << std::setw(9) << std::right << phone_book[i].last_name.substr(0, 9) << ".";
		std::cout << "|";
		if (phone_book[i].nickname.size() <= 10)
			std::cout << std::setw(10) << std::right << phone_book[i].nickname;
		else
			std::cout << std::setw(9) << std::right << phone_book[i].nickname.substr(0, 9) << ".";
		std::cout << "|\n";
		i++;
	}
	i = 9;
	while (1)
	{
		std::cout << "Enter desired index: ";
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cout << "Invalid input, enter a valid index (1, " << '0' + counter + 1 << ")" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (i > counter || i < 1 || i > 8)
		{
			std::cout << "Invalid input, enter a valid index (1, " << '0' + counter + 1 << ")" << std::endl;
		}
		else
			break;
	}
	phone_book[i - 1].print();
}

PhoneBook::~PhoneBook(){};