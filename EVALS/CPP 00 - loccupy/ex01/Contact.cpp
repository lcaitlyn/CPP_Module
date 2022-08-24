#include "Contact.hpp"

contact::contact(){}
contact::~contact(){}

void	contact::add_contact(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, this->m_first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->m_last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->m_nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->m_phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->m_darkest_secret);
}

int	contact::check_if_empty()
{
	int	value = 0;

	if (this->m_first_name.empty() == true || this->m_last_name.empty()== true ||
			this->m_nickname.empty() == true|| this->m_phone_number.empty() == true||
			this->m_darkest_secret.empty()== true){
				value = 1;
			}
	return (value);
}

void	contact::print_in_table(int id)
{
	std::cout << "|" << std::setw(LEN) << id + 1;
	if (this->m_first_name.size() > LEN)
		std::cout << "|" << std::setw(LEN - 1) << this->m_first_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(LEN) << this->m_first_name;
	if (this->m_last_name.size() > LEN)
		std::cout << "|" << std::setw(LEN - 1) << this->m_last_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(LEN) << this->m_last_name;
	if (this->m_nickname.size() > LEN)
		std::cout << "|" << std::setw(LEN - 1) << this->m_nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(LEN) << this->m_nickname;
	std::cout << "|" << std::endl;
}

void	contact::print_all_fields(void)
{
	std::cout << "All information:" << std::endl;
	std::cout << "First name......" << this->m_first_name << std::endl;
	std::cout << "Last name......." << this->m_last_name << std::endl;
	std::cout << "Nickname........" << this->m_nickname << std::endl;
	std::cout << "Phone number...." << this->m_phone_number << std::endl;
	std::cout << "Darkest secret.." << this->m_darkest_secret << std::endl;;
}
