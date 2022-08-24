#include "ClapTrap.hpp"
#define INIT_HP	10
#define INIT_ENERGY 10
#define INIT_ATTACK_DMG 0

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor to "<< name << " called" << std::endl;
	this->name = name;
	hitPoints = INIT_HP;
	energyPoints = INIT_ENERGY;
	attackDamage = INIT_ATTACK_DMG;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "Copy constructor to "<< name << " called" << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "Assignation ( = ) operator called for "<< name << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints < 0)
		std::cout << name << " has no hit points to attack :(" << std::endl;
	else if (energyPoints < 0)
		std::cout << name << " has no energy points to attack :(" << std::endl;
	else
	{
		std::cout << name << " causing " << attackDamage <<
		 " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << name << " cant take damage, because " << name <<
		" has already dead :(" << std::endl;
	}
	else
	{
		if (this->hitPoints <= amount)
		{
			std::cout << name << " died after attack :(" << std::endl;
			this->hitPoints = 0;
		}
		else
		{
			std::cout << name << " taked " << amount <<" damage points and has ";
			this->hitPoints -= amount;
			std::cout << hitPoints << " hit points and still alive :)" 
			<< std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << name << " cant be repaired, because " << name <<
		" has already dead :(" << std::endl;
	}
	else
	{
		if (energyPoints == 0)
		{
			std::cout << this->name << " has no energy points to repair! :("
			<< std::endl;
		}
		else
		{
			std::cout << name << " repaired " << amount <<
			" hit points and still alive :)" << std::endl;
			this->energyPoints--;
			this->hitPoints += amount;
		}
	}
}