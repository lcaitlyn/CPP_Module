#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
	std::cout << name << ": Destructor called" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}