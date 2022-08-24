#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

template < typename T >
typename T::iterator easyfind(T & container, int num)
{
	std::vector< int >::iterator	it;

	it = std::find(container.begin(), container.end(), num);
	if (it != container.end())
		return it;
	throw	std::exception();
}

#endif

