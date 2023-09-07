#include "Contact.hpp"

#include <string>
#include <iostream>

void Contact::setInfo()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	std::cout << "Please input First Name:";
	if (!std::getline(std::cin, firstname))
		std::exit(EXIT_FAILURE);
	this->setterFirstName(firstname);
	std::cout << "Please input Last Name:";
	if (!std::getline(std::cin, lastname))
		std::exit(EXIT_FAILURE);
	this->setterLastName(lastname);
	std::cout << "Please input Nick Name:";
	if (!std::getline(std::cin, nickname))
		std::exit(EXIT_FAILURE);
	this->setterNickName(nickname);
	std::cout << "Please input Phone Number:";
	if (!std::getline(std::cin, phonenumber))
		std::exit(EXIT_FAILURE);
	this->setterPhoneNumber(phonenumber);
	std::cout << "Please input Darkest Secret:";
	if (!std::getline(std::cin, darkestsecret))
		std::exit(EXIT_FAILURE);
	this->setterDarkestSecret(darkestsecret);
}

void Contact::setterFirstName(std::string firstname)
{
	this->firstName = firstname;
}

void Contact::setterLastName(std::string lastname)
{
	this->lastName = lastname;
}

void Contact::setterNickName(std::string nickname)
{
	this->nickName = nickname;
}

void Contact::setterPhoneNumber(std::string phonenumber)
{
	this->phoneNumber = phonenumber;
}

void Contact::setterDarkestSecret(std::string darkestscrete)
{
	this->darkestSecret = darkestscrete;
}

std::string Contact::getterFirstName()
{
	return (this->firstName);
}
std::string Contact::getterLastName()
{
	return (this->lastName);
}
std::string Contact::getterNickName()
{
	return (this->nickName);
}
std::string Contact::getterPhoneNumber()
{
	return (this->phoneNumber);
}
std::string Contact::getterDarkestSecret()
{
	return (this->darkestSecret);
}
