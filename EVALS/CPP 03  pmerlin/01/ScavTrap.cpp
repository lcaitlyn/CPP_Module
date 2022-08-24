#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	std::cout << "ScavTrap constructor for " << name << " called." << std::endl;
	this->hitPoints = INIT_HP;
	this->energyPoints = INIT_ENERGY;
	this->attackDamage = INIT_ATTACK_DMG;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "Copy constructor to "<< name << " called" << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "Assignation ( = ) operator called for "<< name << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}


ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor of " << name << " called." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "Scav attack! ";
	if (hitPoints < 0)
	{
		std::cout << name << " has no hit points to attack :(" << std::endl;
	}
	else if (energyPoints < 0)
		std::cout << name << " has no energy points to attack :(" << std::endl;
	else
	{
		std::cout << name << " causing " << attackDamage <<
		 " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << name << " is in \"Guard\" mode!" << std::endl;
}
