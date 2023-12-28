#include "contact.hpp"
#include "phonebook.hpp"

void PhoneBook::addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret){
	contacts[index] = Contact(first, last, nick, num, secret);
}

std::string PhoneBook::getContactName(int index){
return(contacts[index].getName());
}
