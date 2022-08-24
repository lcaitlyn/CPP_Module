#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	int			id = 0;
	PhoneBook	book;

	std::cout << "Expected commands: ADD, SEARCH or EXIT" << std::endl;
	while (5)
	{
		std::cout << "Enter one of the commands: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
		{
			id = book.add_contact(id);
			if (SIZE == id)
				id = 0;
		}
		else if (cmd == "SEARCH")
			book.search_contact();
		else
			std::cout << "Invalid command entered" << std::endl;
	}
	return (0);
}
