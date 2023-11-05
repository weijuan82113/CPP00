
#include "PhoneBook.hpp"

bool PhoneBook::add(int index)
{
	if (!_contact[index].setInfo())
	{
		_contact[index].setterFirstName("");
		_contact[index].setterLastName("");
		_contact[index].setterNickName("");
		_contact[index].setterPhoneNumber("");
		_contact[index].setterDarkestSecret("");
		std::cout << RED << "Can not input empty field" << RESET << std::endl;
		return false;
	}
	return true;
}

Contact PhoneBook::getContact(int index)
{
	return _contact[index];
}

void PhoneBook::printInfo()
{
	int index = 0;

	std::cout << std::setw(10) << std::right <<"index" << "|";
	std::cout << std::setw(10) << std::right <<"First Name" << "|";
	std::cout << std::setw(10) << std::right <<"Last Name" << "|";
	std::cout << std::setw(10)<< std::right <<"Nick Name" << "|" << std::endl;
	while (index < 8)
	{
		std::cout << std::setw(10) << std::right << index + 1 << "|";
		std::cout << std::setw(10) << std::right << truncate(_contact[index].getterFirstName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(_contact[index].getterLastName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(_contact[index].getterNickName()) << "|" << std::endl;
		index ++;
	}
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return (str);
}

bool PhoneBook::printAllInfo(std::string indexString)
{
	if (indexString.length() > 1 || '1' > indexString[0] || indexString[0] > '8')
	{
		std::cout << RED << "Wrong index!" << RESET << std::endl;
		return (false);
	}
	int index = indexString[0] - '0' - 1;
	std::cout << "Index:" << index + 1 << std::endl;
	std::cout << "First Name:" << _contact[index].getterFirstName() << std::endl;
	std::cout << "Last Name:" << _contact[index].getterLastName() << std::endl;
	std::cout << "Nick Name:" << _contact[index].getterNickName() << std::endl;
	std::cout << "Phone Number:" << _contact[index].getterPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:" << _contact[index].getterDarkestSecret() << std::endl;
	return (true);
}
