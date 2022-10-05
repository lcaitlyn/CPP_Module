#include "Dog.hpp"

Dog::Dog() {
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & dog) {
	type = dog.type;
	brain = new Brain();
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog & dog) {
	if (brain != nullptr)
		delete brain;
	type = dog.type;
	brain = new Brain();
	std::cout << "Animal assigment operator called" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog makes sound *Woof*" << std::endl;
}
