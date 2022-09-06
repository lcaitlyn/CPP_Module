#include "Zombie.hpp"

int main() {
	Zombie *manualZombiePtr = new Zombie("Вручную выделил");
	manualZombiePtr->announce();
	delete manualZombiePtr;

	Zombie *ptr = newZombie("Выделил через функцию в куче");
	ptr->announce();
	delete ptr;

	randomChump("Выделили в стеке");
	
	return 0;
}