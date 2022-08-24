#include "ClapTrap.hpp"

int	main(void)
{

	ClapTrap a("Sub Zero");
	ClapTrap b("Scorpion");

	// ClapTrap c(a);
	// ClapTrap z("Sonya");

	a.attack("Scorpion");
	b.takeDamage(6);
	b.beRepaired(6);
	a.attack("Scorpion");
	b.takeDamage(3);
	b.beRepaired(6);
	a.attack("Scorpion");
	b.takeDamage(5);
	b.beRepaired(6);
	a.attack("Scorpion");
	b = a;
	// b.takeDamage(3);

	// z = c;
	// z.takeDamage(3);
	// b.beRepaired(12);
	// c.takeDamage(3);
	// c.beRepaired(12);
	// c.beRepaired(12);

	return 0;
}

