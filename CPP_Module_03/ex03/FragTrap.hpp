#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & fragTrap);

	~FragTrap();

	FragTrap &operator=(const FragTrap & fragTrap);

	void highFivesGuys(void);
};

#endif