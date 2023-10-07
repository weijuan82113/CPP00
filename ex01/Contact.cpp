#include "Contact.hpp"

#include <string>
#include <iostream>

bool Contact::setInfo()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	std::cout << "Please input First Name:";
	if (!std::getline(std::cin, firstname))
		std::exit(EXIT_FAILURE);
	if (firstname.empty() || firstname.length() == 0)
		return (false);
	this->setterFirstName(firstname);
	std::cout << "Please input Last Name:";
	if (!std::getline(std::cin, lastname))
		std::exit(EXIT_FAILURE);
	if (lastname.empty() || lastname.length() == 0)
		return (false);
	this->setterLastName(lastname);
	std::cout << "Please input Nick Name:";
	if (!std::getline(std::cin, nickname))
		std::exit(EXIT_FAILURE);
	if (nickname.empty() || nickname.length() == 0)
		return (false);
	this->setterNickName(nickname);
	std::cout << "Please input Phone Number:";
	if (!std::getline(std::cin, phonenumber))
		std::exit(EXIT_FAILURE);
	if (phonenumber.empty() || phonenumber.length() == 0)
		return (false);
	this->setterPhoneNumber(phonenumber);
	std::cout << "Please input Darkest Secret:";
	if (!std::getline(std::cin, darkestsecret))
		std::exit(EXIT_FAILURE);
	if (darkestsecret.empty() || darkestsecret.length() == 0)
		return (false);
	this->setterDarkestSecret(darkestsecret);
	return (true);
}

void Contact::setterFirstName(std::string firstname)
{
	this->_firstName = firstname;
}

void Contact::setterLastName(std::string lastname)
{
	this->_lastName = lastname;
}

void Contact::setterNickName(std::string nickname)
{
	this->_nickName = nickname;
}

void Contact::setterPhoneNumber(std::string phonenumber)
{
	this->_phoneNumber = phonenumber;
}

void Contact::setterDarkestSecret(std::string darkestscrete)
{
	this->_darkestSecret = darkestscrete;
}

std::string Contact::getterFirstName()
{
	return (this->_firstName);
}
std::string Contact::getterLastName()
{
	return (this->_lastName);
}
std::string Contact::getterNickName()
{
	return (this->_nickName);
}
std::string Contact::getterPhoneNumber()
{
	return (this->_phoneNumber);
}
std::string Contact::getterDarkestSecret()
{
	return (this->_darkestSecret);
}
