#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
private:
	std::vector<int> vec;
	unsigned int size;
public:
	Span();
	Span(unsigned int size);
	Span(const Span & span);
	
	Span &operator=(const Span &span);

	~Span();

	void addNumber(int num);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	int getNumber(int id);

	class SpanIsFullException : public std::exception {
	public:
		const char * what() const throw() {
			return "SpanIsFullException";
		}
	};

	class SpanIndexOutOfBoundsException : public std::exception {
	public:
		const char * what() const throw() {
			return "SpanIndexOutOfBoundsException";
		}
	};

	class SpanImpossibleException : public std::exception {
	public:
		const char * what() const throw() {
			return "SpanImpossibleException";
		}
	};
};

#endif