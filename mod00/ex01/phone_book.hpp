#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
	Contact phone_book[8];
	int	counter;

public:
	PhoneBook();
	PhoneBook(const PhoneBook& other);
	PhoneBook& operator=(const PhoneBook& other);
	~PhoneBook();
	void	addContact();
	void searchContact();
};
#endif