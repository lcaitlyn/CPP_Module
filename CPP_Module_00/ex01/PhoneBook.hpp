#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact array[8];
	int	index;
	int	size;
	void printBar(std::string index, std::string firstName, std::string lastName, std::string nickname);
	void	searchById(int id);
	std::string scanner(std::string name);
public:
	PhoneBook(void);
	~PhoneBook();
	void add(void);
	void search(void);

};

#endif
