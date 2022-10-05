#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria & copy) {	(*this) = copy; }

AMateria &AMateria::operator=(const AMateria & aMateria) {
	type = aMateria.type;
	return *this;
}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target) {
	std::cout << target.getName() << std::endl;
}
