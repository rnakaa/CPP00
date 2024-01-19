#include "phonebook.hpp"

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret){
	FirstName = first;
	LastName = last;
	NickName = nick;
	PhoneNumber = num;
	Secret = secret;
}
Contact::Contact(){
	FirstName = "First";
	LastName = "Last";
	NickName = "Nick";
	PhoneNumber = "Phone";
	Secret = "Secret";
}

std::string Contact::getFirst(){
	return(FirstName);
}

std::string Contact::getLast(){
	return(LastName);
}

std::string Contact::getNick(){
	return(NickName);
}

std::string Contact::getNum(){
	return(PhoneNumber);
}

std::string Contact::getSecret(){
	return(Secret);
}
