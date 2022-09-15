#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Bob");
	ClapTrap b("Jim");
	// ClapTrap c(a);
	// ClapTrap d = b;

	a.attack("Jim");
	b.takeDamage(6);
	b.beRepaired(6);
	b.attack("Bob");
	a.takeDamage(11);
	a.beRepaired(6);
	a.attack("Jim");

	return 0;
}