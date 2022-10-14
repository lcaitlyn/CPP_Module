#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class EasyFindException : public std::exception {
public:
	const char * what() const throw() {
		return "Element not found!";
	}
};

template <typename T>
typename T::iterator EasyFind(T data, int find) {
	typename T::iterator it;

	if ((it = std::find(data.begin(), data.end(), find)) == data.end())
		throw EasyFindException();
	return it;
}


#endif