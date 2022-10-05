#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		source[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (source[i]) {
			delete source[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		source[i] = copy.source[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		source[i] = copy.source[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (!source[i]) {
			source[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (source[i] && source[i]->getType() == type) {
			return source[i]->clone();
		}
	}
	return 0;
}