#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string name;
	std::string last_name;
	std::string nickname;
	std::string	phone_number;
	std::string darkest_secret;
	
public:
	void setContact()
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
	~Contact(){}
	void Contact_display(int index)
	{
		std::cout << "|" << std::setw(10) << std::right << index;
		std::cout << "|";
		if (name.size() <= 10)
			std::cout << std::setw(10) << std::right << name;
		else
		std::cout << std::setw(9) << std::right << name.substr(0, 9) << ".";
		std::cout << "|";
		if (last_name.size() <= 10)
			std::cout << std::setw(10) << std::right << last_name;
		else
		std::cout << std::setw(9) << std::right << last_name.substr(0, 9) << ".";
		std::cout << "|";
		if (nickname.size() <= 10)
			std::cout << std::setw(10) << std::right << nickname;
		else
		std::cout << std::setw(9) << std::right << nickname.substr(0, 9) << ".";
		std::cout << "|\n";
	}
	void print(){
		std::cout << "Name: " << name << std::endl;
		std::cout << "Last name: " << last_name << std::endl;
		std::cout << "Nickname: " << nickname << std::endl;
		std::cout << "Phone number: " << phone_number << std::endl;
		std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	}
};

#endif