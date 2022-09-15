#include "ScavTrap.hpp"
#include <vector>

int main()
{
	ScavTrap one("Biba");
	std::cout << std::endl;

	ScavTrap two("Boba");
	std::cout << std::endl;

	two.attack("Boba");
	one.guardGate();
	std::cout << std::endl;

	ScavTrap three(one);
	std::cout << std::endl;

	ClapTrap a("Aboba");
	ClapTrap b;
	b = a;
	std::cout << std::endl;

	return 0;
}