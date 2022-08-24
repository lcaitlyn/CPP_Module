#include "easyfind.hpp"

int	foo(int x)
{
	std::cout << "string " << x << std::endl;
	return x;
}

int	main()
{
	std::vector<int>	v1;
	std::vector<int>	v2(10);

	for (int i = 0; i < 10; i++)
		v2[i] = i;

	std::cout << "Case 1 : the value is there" << '\n';
	try
	{
		std::vector< int >::iterator	it = easyfind(v2, 5);
		std::cout << "\tFound value is : " << *it << '\n';

	}
	catch(const std::exception& e)
	{
		std::cerr << "No such of value in v2" << '\n';
	}

	std::cout << "Case 2 : empty vector" << '\n';
	try
	{
		easyfind(v1, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << "\tNo such of value in v1" << '\n';
	}

	return 0;
}

