#include "contact.hpp"
#include "phone_book.hpp"

int main()
{
	std::string input;
	PhoneBook phone_book;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
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
	}
}