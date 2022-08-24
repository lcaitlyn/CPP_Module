#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

int	PhoneBook::add_contact(int id)
{
	std::cout << "Fill: first name, last name, nickname, phone number and darkest secret" << std::endl;
	this->m_contact[id].add_contact();
	if (this->m_contact[id].check_if_empty() == 0)
	{
		std::cout << "Added contact with id " << id + 1 << std::endl;
		return (id + 1);
	}
	else
		std::cout << "Contact fields are empty" << std::endl;
	return (id);
}

void	PhoneBook::search_contact(void)
{
	std::string	id;
	int			number;
	int			i = -1;

	std::cout << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	while (++i < SIZE)
		if (!this->m_contact[i].check_if_empty())
			this->m_contact[i].print_in_table(i);
	std::cout << std::endl;
	std::cout << "Enter contact ID" << std::endl;
	std::getline(std::cin, id);
	number = atoi(id.c_str());
	if (number > SIZE || number < 1)
	{
		std::cout << "This i does not exist" << std::endl;
		return ;
	}
	i = number - 1;
	if (this->m_contact[i].check_if_empty())
		std::cout << "This i does not exist" << std::endl;
	else
		this->m_contact[i].print_all_fields();
	std::cout << std::endl;
}
