#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	std::cout << "FragTrap constructor for " << name << " called." << std::endl;
	this->hitPoints = INIT_HP;
	this->energyPoints = INIT_ENERGY;
	this->attackDamage = INIT_ATTACK_DMG;
}

FragTrap::FragTrap(const FragTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "FragTrap copy constructor to "<< name << " called" << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

FragTrap	&FragTrap::operator = (const FragTrap &other)
{
	this->name = other.name + " copy";
	std::cout << "FragTrap assignation ( = ) operator called for "
	<< name << std::endl;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << name << " called." << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap attack! ";
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " is showing high fives!" << std::endl;
}
