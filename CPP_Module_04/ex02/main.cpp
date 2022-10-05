#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Тема не будет работать, так как класс Animal абстрактный 
	// Animal animal;


	std::cout <<"---------Create one Dog---------"  << std::endl;
	const Animal* j = new Dog();
	std::cout  << "---------Create one Cat---------"  << std::endl;
	const Animal* i = new Cat();
	std::cout  << "---------Create copy Cat---------"   << std::endl;
	const Animal* copy_i = new Cat(*(Cat*)i); // создание копии кота

	std::cout << std::endl  << "---------Delete copy Cat!--------"  << std::endl;
	delete copy_i;
	std::cout  << "---------Delete Dog!------------"  << std::endl;
	delete j; //should not create a leak
	std::cout  << "---------Delete Cat!------------"  << std::endl << std::endl;
	delete i;

	

	return (0);
}