#include "contact.hpp"
#include "phonebook.hpp"

void PhoneBook::addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret){
	contacts[index] = Contact(first, last, nick, num, secret);
}

std::string PhoneBook::getContactFirst(int index){
	return(contacts[index].getFist());
}

std::string PhoneBook::getContactLast(int index){
	return(contacts[index].getLast());
}

std::string PhoneBook::getContactNick(int index){
	return(contacts[index].getNick());
}

std::string PhoneBook::getContactNum(int index){
	return(contacts[index].getNum());
}

std::string PhoneBook::getContactSecret(int index){
	return(contacts[index].getSecret());
}
//----------------PRINT-------------------------------------
void PhoneBook::printContactFirst(int index){
	std::string firstname;

	firstname = PhoneBook::getContactFirst(index);
	std::cout << firstname;
}

void PhoneBook::printContactLast(int index){
	std::string lastname;

	lastname = PhoneBook::getContactLast(index);
	std::cout << lastname;
}

void PhoneBook::printContactNick(int index){
	std::string nickname;

	nickname = PhoneBook::getContactNick(index);
	std::cout << nickname;
}

void PhoneBook::printContactNum(int index){
	std::string num;

	num = PhoneBook::getContactNum(index);
	std::cout << num;
}

void PhoneBook::printContactSecret(int index){
	std::string secret;

	secret = PhoneBook::getContactSecret(index);
	std::cout << secret;
}


std::string PhoneBook::printContacts(){
	int index = 0;

	while (i < 8)
			PhoneBook::printContact(index);
}
