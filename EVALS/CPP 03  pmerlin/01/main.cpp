#include "ScavTrap.hpp"


int	main(void)
{
	
	ScavTrap	a("Bally");
	a.attack("Bally");
	ScavTrap b(a);
	a.takeDamage(3);
	a.beRepaired(1);
	a.guardGate();
	
	b.takeDamage(3);
	b.beRepaired(1);
	b = a;
	return 0;
}

