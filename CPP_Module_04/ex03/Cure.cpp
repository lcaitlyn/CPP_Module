#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure & copy) : AMateria(copy.getType()) { (*this) = copy; }

Cure &Cure::operator=(const Cure & copy) {
	if (this != &copy) {
		type = copy.type;
	}
	return (*this);
}

AMateria* Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}