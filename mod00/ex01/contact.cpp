#include "contact.hpp"

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
	std::cout << "Enter Name of the contact: ";
	std::getline(std::cin, name);
	std::cout << "Enter last name of the contact: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname of the contact: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter his/her darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

Contact::~Contact(){}