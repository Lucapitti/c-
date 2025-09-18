#include "contact.hpp"
#include "phone_book.hpp"
#include <stdio.h>

int main()
{

	std::string input;
	PhoneBook phone_book;
	std::cout << "> ";
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			phone_book.addContact();
		}
		else if (input == "SEARCH")
		{
			phone_book.searchContact();
		}
		else if (input == "EXIT")
			break;
		std::cout << "> ";
	}
	return 0;
}