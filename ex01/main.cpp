#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phonebook;
	int			count; //何人めの入力か保存
	std::string	index;
	std::string first;
	std::string last;
	std::string nick;
	std::string num;
	std::string secret;


	count = 0;
	while (true)
	{
		std::cout << "$";
		std::cin >> command;
		if (std::cin.eof() || std::cin.fail()){
				std::cout << std::endl;
				return (0);
		}
		if (command == "EXIT")
			return (0);

		else if (command == "ADD"){
			std::cout << "First Name" << std::endl;
			std::cin >> first;
			std::cout << "Last Name" << std::endl;
			std::cin >> last;
			std::cout << "Nick Name" << std::endl;
			std::cin >> nick;
			std::cout << "Number" << std::endl;
			std::cin >> num;
			std::cout << "Secret" << std::endl;
			std::cin >> secret;
			phonebook.addcontact(count % 8, first, last, nick, num, secret);
			count++;
		}
		else if (command == "SEARCH"){
			std::cout << "phonebook = ";
			std::cout << phonebook.getCurrentIndex()  << std::endl;
			if (phonebook.printContacts())
				continue ;
			std::cout << "insert index: ";
			std::cin >> index;
			if ((int)index.length() != 1 || !std::isdigit(index[0]))
				continue ;
			const char * c_num = index.c_str();
			int input_num = atoi(c_num);

			if (input_num < 0 || input_num >= phonebook.getCurrentIndex())
				continue ;
			phonebook.printContactOneline(input_num);
 		}
 		else
 			std::cout << "EXIT or ADD or SEARCH" << std::endl;
 		std::cin.clear();
	}
	return (0);
}

