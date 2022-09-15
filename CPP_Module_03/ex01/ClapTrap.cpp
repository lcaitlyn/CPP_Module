#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) :
	name(name), hitPoints(10), enegryPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & clapTrap) :
	name(clapTrap.name), hitPoints(clapTrap.hitPoints),
	enegryPoints(clapTrap.hitPoints), attackDamage(clapTrap.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << ((name.length() == 0) ? "" : name + " " ) << "destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & clapTrap) {
	if (this == &clapTrap)
		return *this;
	
	name = clapTrap.name;
	hitPoints = clapTrap.hitPoints;
	enegryPoints = clapTrap.enegryPoints;
	attackDamage = clapTrap.attackDamage;
	std::cout << "ClapTrap " << ((name.length() == 0) ? "" : name + " " ) << "assigment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " can't attack, because it's dead!" << std::endl;
		return;
	} else if (enegryPoints == 0) {
		std::cout << "ClapTrap " << name << " can't attack, because it hasn't energy!" << std::endl;
		return;
	}

	enegryPoints--;

	std::cout 	<< "ClapTrap " << name << " attacks " << target 
				<< ", causing " << attackDamage << " point of damage!"
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " can't take damage, because it's dead!" << std::endl;
		return;
	}

	hitPoints = (amount > hitPoints) ? 0 : hitPoints - amount;

	std::cout 	<< "ClapTrap " << name << " takes " << amount 
				<< " damage! Now it has " << hitPoints << " hitPoints."
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " can't be repaired, because it's dead!" << std::endl;
		return;
	} else if (enegryPoints == 0) {
		std::cout << "ClapTrap " << name << " can't be repaired, because it hasn't energy!" << std::endl;
		return;
	}

	hitPoints += amount;

	std::cout 	<< "ClapTrap " << name << " repairs " << amount 
				<< " hit points! Now it has " << hitPoints << " hitPoints."
				<< std::endl;
}