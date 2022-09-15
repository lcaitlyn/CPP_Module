#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Animal *arrAnimal[100]; // создание массива из ста животных

	// for (int i = 0; i < 50; i++)
	// 	arrAnimal[i] = new Cat(); // заполняем 50 кошек
	// for (int i = 50; i < 100; i++)
	// 	arrAnimal[i] = new Dog(); // заполняем 50 собак

	// std::cout << std::endl;

	// for (int i = 0; i < 100; i++) // удаляем всех
	// 	delete arrAnimal[i];
	// std::cout << std::endl << std::endl;


	// std::cout <<"---------Create one Dog---------"  << std::endl;
	// const Animal* j = new Dog();
	// std::cout  << "---------Create one Cat---------"  << std::endl;
	// const Animal* i = new Cat();
	// std::cout  << "---------Create copy Cat---------"   << std::endl;
	// const Animal* copy_i = new Cat(*(Cat*)i); // создание копии кота

	// std::cout << std::endl  << "---------Delete copy Cat!--------"  << std::endl;
	// delete copy_i;
	// std::cout  << "---------Delete Dog!------------"  << std::endl;
	// delete j; //should not create a leak
	// std::cout  << "---------Delete Cat!------------"  << std::endl << std::endl;
	// delete i;


	// Cat kitty; //копирование
	// std::cout << std::endl;
	// Cat mu(kitty);
	// std::cout << std::endl;
	// Cat Mus;

	// std::cout << std::endl;
	// kitty = Mus;  // копируем в первый kitty (там освобождаем мозги и создаем новые которые были у mus)
	// std::cout << std::endl;

	return (0);
}