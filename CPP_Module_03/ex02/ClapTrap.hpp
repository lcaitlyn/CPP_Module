#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	enegryPoints;
	unsigned int	attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & clapTrap);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap & clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif