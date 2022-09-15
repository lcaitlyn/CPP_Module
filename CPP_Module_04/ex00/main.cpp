#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;

	std::cout << "Dog type: " << j->getType() << " " << std::endl;
	std::cout << "Cat type: " << i->getType() << " " << std::endl;
	std::cout << "WrongCat type: " << k->getType() << " " << std::endl << std::endl;

	std::cout << "Meta do makeSound(): ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "Dog do makeSound(): ";
	j->makeSound();
	std::cout << std::endl;

	std::cout << "Cat do makeSound(): ";
	i->makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat do makeSound(): ";
	k->makeSound();
	std::cout << std::endl;

	std::cout << std::endl;
	delete j;
	delete i;
	delete k;
	delete meta;

	return (0);
}