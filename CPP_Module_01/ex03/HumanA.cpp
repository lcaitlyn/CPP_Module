#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {
	std::cout << name << ": Destructor called" << std::endl;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}