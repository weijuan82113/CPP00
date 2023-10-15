#ifndef CONTACT_HPP
 #define CONTACT_HPP

#include <string>

class Contact
{
	public:

		bool setInfo();
		bool setQuestion(std::string str, void (Contact::*f)(std::string));
		void setterFirstName(std::string firstName);
		void setterLastName(std::string lastName);
		void setterNickName(std::string nickName);
		void setterPhoneNumber(std::string phoneNumber);
		void setterDarkestSecret(std::string darkestScret);
		std::string getterFirstName();
		std::string getterLastName();
		std::string getterNickName();
		std::string getterPhoneNumber();
		std::string getterDarkestSecret();

	private:

		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif
