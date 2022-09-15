#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoints = HIT_POINTS;
	enegryPoints = ENERGY_POINTS;
	attackDamage = ATTACK_DAMAGE;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & scavTrap) : ClapTrap(scavTrap.name) {
	hitPoints = scavTrap.hitPoints;
	enegryPoints = scavTrap.enegryPoints;
	attackDamage = scavTrap.attackDamage;
	std::cout << "ScavTrap " << ((name.length() == 0) ? "" : name + " " ) << "copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & scavTrap) {
	if (this != &scavTrap) {
		name = scavTrap.name;
		hitPoints = scavTrap.hitPoints;
		enegryPoints = scavTrap.enegryPoints;
		attackDamage = scavTrap.attackDamage;
	}
	std::cout << "ScavTrap " << ((name.length() == 0) ? "" : name + " " ) << "assigment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << ((name.length() == 0) ? "" : name + " " ) << "destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ((name.length() == 0) ? "" : name + " " ) << "is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ScavTrap " << name << " can't attack, because it's dead!" << std::endl;
		return;
	} else if (enegryPoints == 0) {
		std::cout << "ScavTrap " << name << " can't attack, because it hasn't energy!" << std::endl;
		return;
	}

	enegryPoints--;

	std::cout 	<< "ScavTrap " << name << " attacks " << target 
				<< ", causing " << attackDamage << " point of damage!"
				<< std::endl;
}
