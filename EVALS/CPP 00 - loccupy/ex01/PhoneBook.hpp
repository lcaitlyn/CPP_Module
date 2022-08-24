#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define SIZE	8

class PhoneBook
{
private:
	contact		m_contact[SIZE];

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		add_contact(int id);
	void	search_contact(void);
};

#endif
