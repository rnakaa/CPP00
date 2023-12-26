#include <iostream>
#include <string>

class Contact
{
	private:
		std::string FirstName;
 		std::string LastName;
 		std::string NickName;
 		std::string PhoneNumber;
 		std::string Secret;
	public:
		Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret){
			FirstName = first;
			LastName = last;
			NickName = nick;
			PhoneNumber = num;
			Secret = secret;
		}
		void getName(){
			std::cout << FirstName <<std::endl;
		}
};

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		void addcontact(int index,std::string first, std::string last, std::string nick, std::string num, std::string secret){
			contacts[index] = Contact(first, last, nick, num, secret);
		}

		getContactName(int index){
			std::cout << contacts[index].getName() << std::endl;
		}
};

int	main()
{
	std::string	command;
	PhoneBook	phonebook;
	int		index;

//-------------------------SECTION NO.00--------------------------------------------------------
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	num;
	std::string	secret;
	std::cin >> first >> last >> nick >> num >> secret;
//------------------------------------------------------------
	index = 0;
	while (true)
	{
		std::getline(std::cin, command);
		std::cout << command << std::endl;
		if (strcmp(command.c_str(), "EXIT") == 0)
			return (0);
		else if (strcmp(command.c_str(), "ADD") == 0)
			phonebook.addcontact(index % 8, first, last, nick, num, secret);
		else if (strcmp(command.c_str(), "SHOW") == 0)
			phonebook.contacts[index % 8].getName();
	}
	return (0);
}



// # memo
//			PhoneBook::addcontact();//　インスタンス必要ない，代入などが起こらない，実行のみ
//			std::cout　これと一緒
//			インスタンス.関数 で呼ぶときはインスタンス内の変数への代入が起こる
// 1. user input
// 2. is_command
// 3. exute command
// 	a. add -> 任意のインデックス番目のコンタクトに値を入れる
// 	b. SEARCH -> 表示する
// 	c. EXIT


