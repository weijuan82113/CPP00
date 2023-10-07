#include "PhoneBook.hpp"
#include <iostream>

int main (void)
{
	std::string cmd;
	PhoneBook book;
	int i = 0;
	bool continuous;

	while (1)
	{
		std::cout << "Please input the command \"ADD\" \"SEARCH\" \"EXIT\" : ";
		if(!std::getline(std::cin, cmd))
			std::exit(EXIT_FAILURE);
		if (cmd == "ADD")
		{
			book.add(i);
			i = (i + 1) % 8;
		}
		else if (cmd == "SEARCH")
		{
			int	input_index;
			book.printInfo();
			continuous = true;
			while (continuous)
			{
				std::cout << "Please input index for 1 to 8:" << std::endl;
				std::cin >> input_index;
				std::cin.clear();
				std::cin.ignore();
				if(!book.printAllInfo(input_index))
					continuous = true;
				else
					continuous = false;
			}
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Can not find the command : " << cmd << std::endl;
	}

}
