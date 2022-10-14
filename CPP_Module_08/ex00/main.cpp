#include <iostream>
#include "EasyFind.hpp"

#include <list>

int	main()
{
	std::vector<int> vec;
	
	srand(time(NULL));

	for(int i = 0; i < 10; i++)
	vec.push_back(rand() % 100);

	std::cout << "VECTOR CONTAINS: ";
	for (int i = 0; i < 9; i++)
		std::cout << vec[i] << ", ";
	std::cout << vec[9] << std::endl;

	try
	{
		std::cout << "Ищем 5ый элемент:" ;
		std::cout << *EasyFind(vec, vec[4]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Ищем 10ый (не существующий) элемент: " ;
		std::cout << *EasyFind(vec, vec[10]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::list<char> alphabit;

	for (int i = 0; i < 26; i++) {
		alphabit.push_back(i + 'a');
	}

	std::cout << "LIST CONTAINS: ";

	std::list<char>::iterator it = alphabit.begin();
		
	for (; *it != alphabit.back(); it++) {
		std::cout << *it << ", ";
	}
	std::cout << *it << std::endl;

	try
	{
		std::cout << "Ищем букву r: " << *EasyFind(alphabit, 'r') << std::endl;
		std::cout << "Ищем букву R: " << *EasyFind(alphabit, 'R') << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}