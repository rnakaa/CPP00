#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:

		void addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret);

		std::string getContactName(int index);
};
#endif
