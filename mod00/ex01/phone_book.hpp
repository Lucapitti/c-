#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
	Contact phone_book[8];
	int	counter;
public:
	PhoneBook(){
		counter = 0;
	}
	void	addContact(){
		phone_book[counter % 9].setContact();
		counter++;
	}
	void searchContact(){
		if (counter <= 0)
			return ;
		int i = 0;
		while (i < counter && i < 8)
		{
			phone_book[i].Contact_display(i + 1);
			i++;
		}
		i = 9;
		while (1)
		{
			std::cout << "Enter desired index: ";
			std::cin >> i;
			std::cin.ignore();
			if (std::cin.fail())
			{
				std::cout << "Invalid input, enter a valid index (1, 8)\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else if (i > counter || i < 1 || i > 8)
				std::cout << "Invalid input, enter a valid index (1, 8)\n";
			else
				break;
		}
		phone_book[i - 1].print();
	}
};

#endif