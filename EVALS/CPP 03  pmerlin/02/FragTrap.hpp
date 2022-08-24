#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#undef INIT_HP
#undef INIT_ENERGY
#undef INIT_ATTACK_DMG
#define INIT_HP	100
#define INIT_ENERGY 50
#define INIT_ATTACK_DMG 20

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	~FragTrap();

	FragTrap &operator = (FragTrap const &other);
	void	highFivesGuys(void);
	void	attack(std::string const &other);
};


#endif