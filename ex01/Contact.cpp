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
	if (!setQuestion("Please input First Name:", &Contact::setterFirstName))
		return(false);
	if (!setQuestion("Please input Last Name:", &Contact::setterLastName))
		return(false);
	if (!setQuestion("Please input Nick Name:", &Contact::setterNickName))
		return(false);
	if (!setQuestion("Please input Phone Number:", &Contact::setterPhoneNumber))
		return(false);
	if (!setQuestion("Please input Darkest Secret:", &Contact::setterDarkestSecret))
		return(false);
	return (true);
}

void Contact::setterFirstName(std::string firstname)
{
	_firstName = firstname;
}

void Contact::setterLastName(std::string lastname)
{
	_lastName = lastname;
}

void Contact::setterNickName(std::string nickname)
{
	_nickName = nickname;
}

void Contact::setterPhoneNumber(std::string phonenumber)
{
	_phoneNumber = phonenumber;
}

void Contact::setterDarkestSecret(std::string darkestscrete)
{
	_darkestSecret = darkestscrete;
}

std::string Contact::getterFirstName()
{
	return (_firstName);
}
std::string Contact::getterLastName()
{
	return (_lastName);
}
std::string Contact::getterNickName()
{
	return (_nickName);
}
std::string Contact::getterPhoneNumber()
{
	return (_phoneNumber);
}
std::string Contact::getterDarkestSecret()
{
	return (_darkestSecret);
}
