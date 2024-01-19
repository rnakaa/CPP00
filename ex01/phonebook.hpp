#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int	current_index;
	public:

		void addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret);

		int			getCurrentIndex();
		void		incCurrentIndex();
		std::string getContactFirst(int index);
		std::string getContactLast(int index);
		std::string getContactNick(int index);
		std::string getContactNum(int index);
		std::string getContactSecret(int index);
		std::string extractFirstTen(std::string str);
		void		printContactFirst(int index);
		void 		printContactLast(int index);
		void 		printContactNick(int index);
		void 		printContactNum(int index);
		void 		printContactSecret(int index);
		void 		printContact(int index);
		void 		printContactOneline(int index);
		int	 		printContacts();
};
#endif
