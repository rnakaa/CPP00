class PhoneBook
{
	private:
		int number;
		std::string name;
		Contact contact;
	public:
};

class Contact
{
	private:
		std::FirstName;
		std::LastName;
		std::NickName;
		std::PhoneNumber;
		std::Secret;
};

int	main()
{
	string	command;
	Phonebook	phonebook;

	while (true)
	{
		std::cin >> command;
		if (strcmp(command, "EXIT")
			return (0);
		if (strcmp(command, "ADD")
			addcontact();
	}
	return (0);
}
