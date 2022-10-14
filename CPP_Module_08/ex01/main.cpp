#include "Span.hpp"

# define SIZE 10

int main( void ) {
	srand(time(NULL));

	Span origin(SIZE);

	try {
		std::cout << "added: ";
		for (int i = 0; i < SIZE - 1; i++) {
			origin.addNumber(rand() % 10);
			std::cout  << origin.getNumber(i) << ", ";
		}
		origin.addNumber(rand() % 10);
		std::cout  << origin.getNumber(SIZE - 1) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Span copy(origin);

	std::cout << "copy: ";
	for (int i = 0; i < SIZE - 1; i++) {
		std::cout  << origin.getNumber(i) << ", ";
	}
	std::cout  << origin.getNumber(SIZE - 1) << std::endl;
	
	Span assign(origin);
	std::cout << "assign: ";
	for (int i = 0; i < SIZE - 1; i++) {
		std::cout  << assign.getNumber(i) << ", ";
	}
	std::cout  << assign.getNumber(SIZE - 1) << std::endl;

	std::cout << std::endl << "Span(10) - полностью заполнен" << std::endl << "Попытка переполнить: ";
	try {
		origin.addNumber(228);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Попытка получить элемент под индексом 15: ";
	try {
		origin.getNumber(15);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Shortest span = " << origin.shortestSpan() << std::endl;
	std::cout << "Shortest span = " << origin.longestSpan() << std::endl;

	std::cout << std::endl << "Время мейника по сабджекту:" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}