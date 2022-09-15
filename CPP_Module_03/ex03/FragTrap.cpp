#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	enegryPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & fragTrap) : ClapTrap(fragTrap.name) {
	hitPoints = fragTrap.hitPoints;
	enegryPoints = fragTrap.enegryPoints;
	attackDamage = fragTrap.attackDamage;
	std::cout << "FragTrap " << ((name.length() == 0) ? "" : name + " " ) << "copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap & fragTrap) {
	if (this != &fragTrap) {
		hitPoints = fragTrap.hitPoints;
		enegryPoints = fragTrap.enegryPoints;
		attackDamage = fragTrap.attackDamage;
	}
	std::cout << "FragTrap " << ((name.length() == 0) ? "" : name + " " ) << "assigment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << ((name.length() == 0) ? "" : name + " " ) << "destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << ((name.length() == 0) ? "" : name + " " ) << "high-fives!" << std::endl;
}