#include "Contact.hpp"

bool Contact::setQuestion(std::string str, void (Contact::*f)(std::string))
{
	std::string input;

	std::cout << str;
	if (!std::getline(std::cin, input))
		std::exit(EXIT_SUCCESS);
	if (input.empty() || input.length() == 0)
		return (false);
	(this->*f)(input);
	return (true);
}

bool Contact::setInfo()
{
	if (!this->setQuestion("Please input First Name:", &Contact::setterFirstName))
		return(false);
	if (!this->setQuestion("Please input Last Name:", &Contact::setterLastName))
		return(false);
	if (!this->setQuestion("Please input Nick Name:", &Contact::setterNickName))
		return(false);
	if (!this->setQuestion("Please input Phone Number:", &Contact::setterPhoneNumber))
		return(false);
	if (!this->setQuestion("Please input Darkest Secret:", &Contact::setterDarkestSecret))
		return(false);
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
