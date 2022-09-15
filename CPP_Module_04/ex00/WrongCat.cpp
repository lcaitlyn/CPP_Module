#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & WrongCat) {
	type = WrongCat.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat & WrongCat) {
	type = WrongCat.type;
	std::cout << "Animal assigment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat makes sound *Meow*" << std::endl;
}
