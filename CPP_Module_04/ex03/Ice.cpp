#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice & copy) : AMateria(copy.getType()) { (*this) = copy; }

Ice &Ice::operator=(const Ice & copy) {
	if (this != &copy) {
		type = copy.type;
	}
	return (*this);
}

AMateria* Ice::clone() const { return new Ice(); }

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}