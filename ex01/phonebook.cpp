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
		void setContact(int index, std::string input);
		set contact(void)
};

class PhoneBook
{
	private:
// 		int number;
// 		std::string name;
	public:
		void addcontact()
		Contact contact[8];
};

int	main()
{
	std::string	command;
	PhoneBook	phonebook;

//	phonebook.contact[0].FirstName = "Alpha";
//	std::cout << phonebook.contact[0].FirstName << std::endl;

//	while (true)
//	{
//		std::getline(std::cin, command);
//		std::cout << command << std::endl;
//		if (strcmp(command, "EXIT")
//			return (0);
//		if (strcmp(command, "ADD")
//			phonebook.addcontact();
//	}
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


