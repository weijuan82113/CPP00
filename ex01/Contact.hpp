#ifndef CONTACT_HPP
 #define CONTACT_HPP

#include <string>

class Contact
{
	public:

		void setInfo();
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

		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
