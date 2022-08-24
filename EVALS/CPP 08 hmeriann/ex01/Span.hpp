#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

class Span
{
private:

	unsigned int		N_;
	std::vector<int>	*vector_;
	Span();

public:

	Span(unsigned int N);
	~Span();

	Span(const Span & span);
	Span	&operator=(const Span & rhs);

	void	addNumber(unsigned int num);
	void	addNumber(std::vector<int>::iterator v1, std::vector<int>::iterator v2);
	int		shortestSpan();
	int		longestSpan();

	class	NoMoreSpace: public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	SpanTooShort: public std::exception {
		public:
			virtual const char *what() const throw();
	};

};


#endif
