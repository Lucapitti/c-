#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	phone_number;
	std::string darkest_secret;
public:
	std::string name;
	std::string last_name;
	std::string nickname;
	Contact();
	Contact(const Contact& other);
	Contact& operator=(const Contact& other);
	void setContact();

	void print();

	~Contact();
};

#endif