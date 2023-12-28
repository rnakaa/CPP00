#include <iostream>
#include <string>
#include "phonebook.hpp"




int	main()
{
	std::string	command;
	PhoneBook	phonebook;
	int		count;
	int		index;

	count = 0;
	while (true)
	{
		
		std::cin >> command;
		if (std::cin.eof() || std::cin.fail()){
				std::cout << std::endl;
				return (0);
		}
		if (command == "EXIT")
			return (0);
		else if (command == "ADD"){
			std::cout << "First Name" << std::endl;
			std::cin >> first;
			std::cout << "Last Name" << std::endl;
			std::cin >> last;
			std::cout << "Nick Name" << std::endl;
			std::cin >> nick;
			std::cout << "Number" << std::endl;
			std::cin >> num;
			std::cout << "Secret" << std::endl;
			std::cin >> secret;		
			phonebook.addcontact(count % 8, first, last, nick, num, secret);
			count++;
		}
		else if (command == "SEARCH"){
			std::cin >> index;
			if (index > 8 || index <= 0){
					std::cout << "out of index range" << std::endl;
					break;
			}
			index--;
			std::cout << index << std::endl;
			std::cout << phonebook.getContactName(index) << std::endl;
		}
		else
			std::cout << "EXIT or ADD or SEARCH" << std::endl;
		std::cin.clear();
	}
	return (0);
}



//std::getline(std::cin, command);
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


