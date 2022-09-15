#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook() {}

std::string	PhoneBook::scanner(std::string name) {
	std::string	str;

	std::cout << "Enter " << name << ": ";
	std::cin >> str;
	if (str.empty())
		exit(1);
	return str;
}

std::string	checkStringLen(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

int	isNumber(std::string str) {
	for (int i = 0; i < (int)str.length(); i++) {
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}

void PhoneBook::printBar(std::string index, std::string firstName, std::string lastName, std::string nickname) {
	
	std::cout	<< "|"
				<< std::right << std::setw(10) << checkStringLen(index) << "|"
				<< std::right << std::setw(10) << checkStringLen(firstName) << "|"
				<< std::right << std::setw(10) << checkStringLen(lastName) << "|"
				<< std::right << std::setw(10) << checkStringLen(nickname) << "|"
				<< std::endl;
}

void	PhoneBook::searchById(int id) {
	if (id < 0 || id > this->size - 1) {
		std::cout << "Error! Wrong id (1 <= id <= " << this->size << ") "<< std::endl;
		return;
	} else if (array[id].getFirstName().empty()) {
		std::cout << "Error! There is no id = " << id + 1 << std::endl;
		return;
	} else {
		std::cout<< std::left << std::setw(15) << "First name:" << array[id].getFirstName() << std::endl;
		std::cout<< std::left << std::setw(15) << "Last name:" << array[id].getLastName() << std::endl;
		std::cout<< std::left << std::setw(15) << "Nickname:" << array[id].getNickname() << std::endl;
		std::cout<< std::left << std::setw(15) << "Phone number:" << array[id].getPhoneNumber() << std::endl;
		std::cout<< std::left << std::setw(15) << "Darkest secret:" << array[id].getDarkestSecret()  << std::endl;
	}
}


void	PhoneBook::add() {
	Contact	newContact;
	std::string	str;

	newContact.setFirstName(scanner("First name"));
	newContact.setLastName(scanner("Last name"));
	newContact.setNickname(scanner("Nickname"));
	newContact.setPhoneNumber(scanner("Phone number"));
	newContact.setDarkestSecret(scanner("Darkest secret"));

	array[size % 8] = newContact;
	size++;
}

void	PhoneBook::search() {
	std::string id;
	int	lenght = (size > 7) ? 8 : size % 8;

	printBar("Index", "First name", "Last name", "Nickname");

	if (this->size == 0)
		return;
	for (int i = 0; i < lenght; i++) {
		printBar(std::to_string(i + 1), array[i].getFirstName(), array[i].getLastName(), array[i].getNickname());
	}

	id = scanner("id");
	if (!isNumber(id)) {
		std::cout << "Error! Id is not number" << std::endl;
		return;
	} else {
		searchById(std::stoi(id) - 1);
	}
}
