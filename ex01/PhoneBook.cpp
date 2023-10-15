
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <string>

void PhoneBook::add(int i)
{
	for ( ;!contact[i].setInfo(); )
		std::cout << RED << "Can not input empty field" << RESET << std::endl;
}

Contact PhoneBook::getContact(int i)
{
	return this->contact[i];
}

void PhoneBook::printInfo()
{
	int i = 0;

	std::cout << std::setw(10) << std::right <<"index" << "|";
	std::cout << std::setw(10) << std::right <<"First Name" << "|";
	std::cout << std::setw(10) << std::right <<"Last Name" << "|";
	std::cout << std::setw(10)<< std::right <<"Nick Name" << "|" << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		std::cout << std::setw(10) << std::right << this->truncate(contact[i].getterFirstName()) << "|";
		std::cout << std::setw(10) << std::right << this->truncate(contact[i].getterLastName()) << "|";
		std::cout << std::setw(10) << std::right << this->truncate(contact[i].getterNickName()) << "|" << std::endl;
		i ++;
	}
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0,9) + ".");
	return (str);
}

bool PhoneBook::printAllInfo(std::string index_string)
{
	if (index_string.length() > 1 || '1' > index_string[0] || index_string[0] > '8')
	{
		std::cout << RED << "Wrong index!" << RESET << std::endl;
		return (false);
	}
	int index = index_string[0] - '0' - 1;
	std::cout << "Index:" << index + 1 << std::endl;
	std::cout << "First Name:" << contact[index].getterFirstName() << std::endl;
	std::cout << "Last Name:" << contact[index].getterLastName() << std::endl;
	std::cout << "Nick Name:" << contact[index].getterNickName() << std::endl;
	std::cout << "Phone Number:" << contact[index].getterPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:" << contact[index].getterDarkestSecret() << std::endl;
	return (true);
}
