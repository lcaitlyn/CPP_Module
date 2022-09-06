#include "Zombie.hpp"

int main() {
	Zombie *zombies = zombieHorde(5, "Zombie");

	for (int i = 0; i < 5; i++) {
		zombies[i].announce();
	}

	// zombies[5].announce();

	delete[] zombies;

	return 0;
}