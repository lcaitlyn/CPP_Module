#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#undef INIT_HP
#undef INIT_ENERGY
#undef INIT_ATTACK_DMG
#define INIT_HP	100
#define INIT_ENERGY 50
#define INIT_ATTACK_DMG 20

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();

	ScavTrap &operator = (ScavTrap const &other);
	void	guardGate(void);
	void	attack(std::string const &other);
};


#endif