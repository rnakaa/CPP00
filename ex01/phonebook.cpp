#include "Contact.hpp"
#include "PhoneBook.hpp"

void PhoneBook::addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret){
	contacts[index] = Contact(first, last, nick, num, secret);
	incCurrentIndex();
}

std::string PhoneBook::getContactFirst(int index){
	return(contacts[index].getFirst());
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

std::string PhoneBook::extractFirstTen(std::string str){
	std::string result = str;

	if (str.length() > 10){
		result = str.substr(0,9);
		result += ".";
	}
	return (result);
}

void PhoneBook::printContact(int index){
	std::cout << index;	
	std::cout << "|";
	std::cout << std::setw(10) << PhoneBook::extractFirstTen(PhoneBook::getContactFirst(index));	
	std::cout << "|";
	std::cout << std::setw(10) << PhoneBook::extractFirstTen(PhoneBook::getContactLast(index));	
	std::cout << "|";
	std::cout << std::setw(10) << PhoneBook::extractFirstTen(PhoneBook::getContactNick(index));	
	std::cout << "|";
	std::cout << std::endl;
}

int PhoneBook::printContacts(){
	int index = 0;

	if (current_index == 0)
		return 1;
 	while (index < current_index)
 			PhoneBook::printContact(index++);
	return 0;
}

int PhoneBook::getCurrentIndex(){
	return (current_index);
}

void PhoneBook::incCurrentIndex(){
	if (current_index < 8)
		current_index++;
}

void PhoneBook::printContactOneline(int index){
	std::cout  << "FIRSTNAME: " << PhoneBook::getContactFirst(index) << std::endl;
	std::cout  << "LASTNAME:  "<< PhoneBook::getContactLast(index) << std::endl;	
	std::cout  << "NICKNAME:  "<< PhoneBook::getContactNick(index) << std::endl;	
	std::cout  << "NUMBER:    "<< PhoneBook::getContactNum(index) << std::endl;	
	std::cout  << "SECRET:    "<< PhoneBook::getContactSecret(index) << std::endl;
}
