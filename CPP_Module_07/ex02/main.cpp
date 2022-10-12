#include <iostream>
#include "Array.hpp"

#define MAX_VAL 7
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}


	{
		std::cout << "-----------------|numbers VS tmp VS test|-----------------\n";
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << numbers[i] << "|";
		std::cout << std::endl;
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << test[i] << "|";
		std::cout << std::endl;
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << tmp[i] << "|";
		std::cout << std::endl;
	}


	std::cout << "-----------------|Compare numbers VS mirror|-----------------\n";
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}


	std::cout << "-----------------|test the [] operator with -2|-----------------\n";
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-----------------|test the [] operator with MAX_VALUE|-----------------\n";
	try
	{
		numbers[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << "-----------------|Change the values of numbers|-----------------\n";
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand()%10;
	}
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << numbers[i] << "|";
	std::cout << std::endl;
	delete [] mirror;//
	
	return 0;
}