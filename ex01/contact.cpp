#include "phonebook.hpp"

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret){
	FirstName = first;
	LastName = last;
	NickName = nick;
	PhoneNumber = num;
	Secret = secret;
}

std::string Contact::getName(){
	return(FirstName);
}

