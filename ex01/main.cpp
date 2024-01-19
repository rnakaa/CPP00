#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <string>
#include "phonebook.hpp"

int	main()
{
	int			count;
	PhoneBook	phonebook;
	std::string	command;
	std::string	index;

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
			phonebook.add(count);
			count++;
		}
		else if (command == "SEARCH"){
			phonebook.search();
 		}
 		else
 			std::cout << "EXIT or ADD or SEARCH" << std::endl;
 		std::cin.clear();
	}
	return (0);
}

