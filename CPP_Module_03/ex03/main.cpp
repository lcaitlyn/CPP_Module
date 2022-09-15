#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap one("Biba");
	std::cout << std::endl;

	DiamondTrap two("Boba");
	std::cout << std::endl;

	DiamondTrap three(two);
	std::cout << std::endl;

	two.whoAmI();
	two.attack("bum!");
	two.highFivesGuys();
	two.takeDamage(5);
	one.attack("bom!");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}