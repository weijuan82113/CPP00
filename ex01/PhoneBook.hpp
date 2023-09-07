#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:

		void add(int i);
		Contact getContact(int i);
		void printInfo();
		std::string truncate(std::string str);
		bool printAllInfo(std::string index);

	private:

		Contact contact[8];
};

#endif
