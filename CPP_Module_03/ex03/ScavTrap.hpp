#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
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