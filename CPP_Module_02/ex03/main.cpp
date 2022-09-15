#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a(-2, 4);
	Point b(6.0f, 4.0f);
	Point c(1, -3);
	Point a_copy(a);
	Point b_assigment = b;

	std::cout << a << "==" << b << "? " << (a == b) << std::endl;
	std::cout << a << "==" << c << "? " << (a == c) << std::endl;
	std::cout << c << "==" << b << "? " << (c == b) << std::endl;
	std::cout << a << "==" << a_copy << "? " << (a == a_copy) << std::endl;
	std::cout << b << "==" << b_assigment << "? " << (b_assigment == b) << std::endl;

	Point M(1, 4); // лежит на линии
	Point N(1, 3); // внутри
	Point K(3, 5); // за пределелами
	Point L(3.5f, 3.9f); //внутри

	std::cout << "Точка " << M << " лежит на линии, результат функции = " <<bsp(a,b,c,M) << std::endl;
	std::cout << "Точка " << N << " лежит внутри, результат функции = " << bsp(a,b,c,N) << std::endl;
	std::cout << "Точка " << K << " лежит за пределами, результат функции = " << bsp(a,b,c,K) << std::endl;
	std::cout << "Точка " << L << " лежит внутри, результат функции = " << bsp(a,b,c,N) << std::endl;
	return 0;
}