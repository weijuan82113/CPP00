#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

class PhoneBook
{
	public:

		bool add(int i);
		Contact getContact(int i);
		void printInfo();
		std::string truncate(std::string str);
		bool printAllInfo(std::string index);

	private:

		Contact _contact[8];
};

#endif
