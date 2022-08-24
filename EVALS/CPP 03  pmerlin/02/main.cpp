#include "FragTrap.hpp"


int	main(void)
{
	
	FragTrap	a("Sonya");
	a.attack("Sonya");
	FragTrap b(a);
	a.takeDamage(3);
	a.beRepaired(1);
	a.highFivesGuys();
	
	b.takeDamage(3);
	b.beRepaired(1);
	b = a;
	return 0;
}

