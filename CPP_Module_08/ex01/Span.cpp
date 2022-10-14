#include "Span.hpp"

Span::Span() : vec(0), size(0) {}
Span::Span(unsigned int size) : size(size) {}
Span::Span(const Span & span) : size(span.size) {
	vec.insert(vec.end(), span.vec.begin(), span.vec.end());
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		size = span.size;
		vec.insert(vec.end(), span.vec.begin(), span.vec.end());
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (size == vec.size())
		throw SpanIsFullException();
	vec.push_back(num);
}

unsigned int Span::shortestSpan() const {
	if (size < 2)
		throw SpanImpossibleException();

	unsigned int min = INT32_MAX;
	for (std::vector<int>::const_iterator it1 = vec.begin(); it1 != vec.end(); it1++) {
		for (std::vector<int>::const_iterator it2 = it1 + 1; it2 != vec.end(); it2++) {
			if (abs(*it2 - *it1) < (int)min)
				min = abs(*it2 - *it1);
		}
	}
	return min;
}

unsigned int Span::longestSpan() const {
	if (size < 2)
		throw SpanImpossibleException();

	return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

int Span::getNumber(int id) { 
	if (id < 0 || id >= static_cast<int>(size))
		throw SpanIndexOutOfBoundsException();
	return vec.at(id);
}
