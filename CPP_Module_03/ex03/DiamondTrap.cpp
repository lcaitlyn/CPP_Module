#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : name(name) {
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	enegryPoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamondTrap) : name(diamondTrap.name) {
	ClapTrap::name = diamondTrap.name + "_clap_name";
	hitPoints = 100;
	enegryPoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << ((name.length() == 0) ? "" : name + " " ) << "copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap & diamondTrap) {
	if (this != &diamondTrap) {
		ClapTrap::name = diamondTrap.name;
		name = diamondTrap.name;
		hitPoints = diamondTrap.hitPoints;
		enegryPoints = diamondTrap.enegryPoints;
		attackDamage = diamondTrap.attackDamage;
	}
	std::cout << "DiamondTrap " << ((name.length() == 0) ? "" : name + " " ) << "assigment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << ((name.length() == 0) ? "" : name + " " ) << "destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout 	<< "My name is " << (name.empty() ? "" : name) << " by DiamondTrap"
				<< " and " << (ClapTrap::name.empty() ? "" : ClapTrap::name) << " by ClapTrap"	<< std::endl;
}