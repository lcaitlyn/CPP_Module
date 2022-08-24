#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define INIT_HP	10
#define INIT_ENERGY 10
#define INIT_ATTACK_DMG 0

class ClapTrap
{
protected:
	std::string	name;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
	unsigned int	hitPoints;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	ClapTrap	&operator = (const ClapTrap &other);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};






#endif