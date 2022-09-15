#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define HIT_POINTS 100;
# define ENERGY_POINTS 50;
# define ATTACK_DAMAGE 20;

class ScavTrap : public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & scavTrap);

	~ScavTrap();

	ScavTrap &operator=(const ScavTrap & scavTrap);

	void guardGate();
	void attack(const std::string& target);
};

#endif