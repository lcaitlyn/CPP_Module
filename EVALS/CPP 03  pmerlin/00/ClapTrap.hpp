#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
	unsigned int	hitPoints;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	ClapTrap	&operator = (const ClapTrap &other);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};






#endif