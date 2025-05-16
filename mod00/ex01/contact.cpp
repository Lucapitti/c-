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
	do {
		std::cout << "Enter Name of the contact:";
		std::getline(std::cin, name);
	} while(name.empty());
	do {
		std::cout << "Enter last name of the contact:";
		std::getline(std::cin, last_name);
	} while(last_name.empty());
	do {
		std::cout << "Enter nickname of the contact:";
		std::getline(std::cin, nickname);
	} while(name.empty());
	do {
		std::cout << "Enter the phone number:";
		std::getline(std::cin, phone_number);
	} while(phone_number.empty());
	do {
		std::cout << "Enter his/her darkest secret:";
		std::getline(std::cin, darkest_secret);
	} while(darkest_secret.empty());
}

Contact::~Contact(){}