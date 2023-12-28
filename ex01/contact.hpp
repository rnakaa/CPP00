#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string FirstName;
 		std::string LastName;
 		std::string NickName;
 		std::string PhoneNumber;
 		std::string Secret;
	public:
		Contact(){
			FirstName = "First";
			LastName = "Last";
			NickName = "Nick";
			PhoneNumber = "Phone";
			Secret = "Secret";
		}

		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getNum();
		std::string getSecret();

		Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret);
};
#endif
