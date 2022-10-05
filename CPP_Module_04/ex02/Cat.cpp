#include "Cat.hpp"

Cat::Cat() {
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & cat) {
	type = cat.type;
	brain = new Brain();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat & cat) {
	if (brain != nullptr)
		delete brain;
	type = cat.type;
	brain = new Brain();
	std::cout << "Animal assigment operator called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat makes sound *Meow*" << std::endl;
}
