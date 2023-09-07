
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <string>

void PhoneBook::add(int i)
{
	contact[i].setInfo();
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

bool PhoneBook::printAllInfo(std::string input_index)
{
	int index = std::stoi(input_index);
	if (index > 8 || index < 1)
	{
		std::cout << "Wrong index!" << std::endl;
		return (false);
	}
	index -= 1;
	std::cout << "Index:" << index + 1 << std::endl;
	std::cout << "First Name:" << contact[index].getterFirstName() << std::endl;
	std::cout << "Last Name:" << contact[index].getterLastName() << std::endl;
	std::cout << "Nick Name:" << contact[index].getterNickName() << std::endl;
	std::cout << "Phone Number:" << contact[index].getterPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:" << contact[index].getterDarkestSecret() << std::endl;
	return (true);
}
