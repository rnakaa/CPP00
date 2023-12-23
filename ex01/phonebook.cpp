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
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string Secret;
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
