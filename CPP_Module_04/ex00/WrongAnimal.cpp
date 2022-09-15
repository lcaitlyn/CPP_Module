#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & WrongAnimal) : type(WrongAnimal.type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}
	
WrongAnimal &WrongAnimal::operator=(const WrongAnimal & WrongAnimal) {
	if (this != &WrongAnimal) {
		type = WrongAnimal.type;
	} 
	std::cout << "WrongAnimal assigment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes sound &*Wrong???" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }