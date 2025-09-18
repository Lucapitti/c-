#include "contact.hpp"

Contact::Contact()
{}

Contact::Contact(const Contact& other)
{
	if (!other.name.empty())
		this->name = other.name;
	if (!other.nickname.empty())
		this->nickname = other.nickname;
	if (!other.last_name.empty())
		this->last_name = other.last_name;
	if (!other.phone_number.empty())
		this->phone_number = other.phone_number;
	if (!other.darkest_secret.empty())
		this->darkest_secret = other.darkest_secret;
}

Contact& Contact::operator=(const Contact& other)
{
	if (this == &other)
		return *this;
	if (!other.name.empty())
		this->name = other.name;
	if (!other.nickname.empty())
		this->nickname = other.nickname;
	if (!other.last_name.empty())
		this->last_name = other.last_name;
	if (!other.phone_number.empty())
		this->phone_number = other.phone_number;
	if (!other.darkest_secret.empty())
		this->darkest_secret = other.darkest_secret;
	return *this;
}

int	only_num_and_space(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
			return 0;
		i++;
	}
	return 1;
}

void Contact::print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void Contact::setContact()
{
	do {
		std::cout << "Enter Name of the contact: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			exit(0);
	} while(name.empty());
	do {
		std::cout << "Enter last name of the contact: ";
		std::getline(std::cin, last_name);
		if (std::cin.eof())
			exit(0);
	} while(last_name.empty());
	do {
		std::cout << "Enter nickname of the contact: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			exit(0);
	} while(nickname.empty());
	do {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, phone_number);
		if (!only_num_and_space(phone_number))
			phone_number.clear();
		if (std::cin.eof())
			exit(0);
	} while(phone_number.empty());
	do {
		std::cout << "Enter his/her darkest secret: ";
		std::getline(std::cin, darkest_secret);
		if (std::cin.eof())
			exit(0);
	} while(darkest_secret.empty());
}

Contact::~Contact(){}