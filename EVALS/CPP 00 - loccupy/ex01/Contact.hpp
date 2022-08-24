#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

# define LEN	10

class contact
{
private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;

public:
	contact(void);
	~contact(void);
	void	add_contact(void);
	int		check_if_empty(void);
	void	print_in_table(int id);
	void	print_all_fields(void);
};

#endif
