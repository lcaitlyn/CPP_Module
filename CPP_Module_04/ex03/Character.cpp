#include "Character.hpp"

Character::Character() {}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
}

Character::Character(std::string name) : name(name) {}

Character::Character(const Character &copy) { (*this) = copy; }

Character &Character::operator=(const Character &copy) {
	name = copy.name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = copy.inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const { return name; }

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
	std::cout << "Fail! Inventory is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Fail! Out of index" << std::endl;
		return;
	}
	inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Fail! Out of index" << std::endl;
		return;
	} else if (!inventory[idx]) {
		std::cout << "Fail! There is no materia in your inventory" << std::endl;
		return;
	}

	inventory[idx]->use(target);
}
