#include "PhoneBook.hpp"

int	main() {
	PhoneBook phoneBook;
	std::string	str;

	while (1) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> str;
		if (!str.compare("ADD"))
			phoneBook.add();
		else if (!str.compare("SEARCH"))
			phoneBook.search();
		else if (!str.compare("EXIT"))
			break;
		else
			std::cout << "Wrong command! Try again" << std::endl;
	}
	return 0;
}
