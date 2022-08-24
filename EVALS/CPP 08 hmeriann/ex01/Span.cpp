#include "Span.hpp"

Span::Span(unsigned int N) : N_(N)
{
	vector_ = new std::vector<int>;
}

Span::~Span() { vector_->clear(); }

Span::Span(const Span & span) : N_(span.N_), vector_(span.vector_) {}


Span	&Span::operator=(const Span & rhs)
{
	this->N_ = rhs.N_;
	this->vector_ = rhs.vector_;

	return *this;
}


void	Span::addNumber(unsigned int num)
{
	if (vector_->size() < this->N_)
		vector_->push_back(num);
	else
		throw Span::NoMoreSpace();
}

void	Span::addNumber(std::vector<int>::iterator v1, std::vector<int>::iterator v2)
{
	size_t	len = std::distance(v1, v2);

	if (len < this->N_)
	{
		vector_->insert(vector_->begin(), v1, v2);
	}
	else
		throw std::out_of_range("Out of Span range");
}

int		Span::shortestSpan()
{
	int	res = INT_MAX;
	int	dist;

	if (vector_->size() < 2)
		throw Span::SpanTooShort();

	for(size_t i = 0; i < vector_->size(); i++)
	{
		dist = std::abs((*vector_)[i] - (*vector_)[i + 1]);
		if (dist < res)
			res = dist;
	}
	return res;
}

int		Span::longestSpan()
{
	if (vector_->size() < 2)
		throw Span::SpanTooShort();

	int	x = *max_element(vector_->begin(), vector_->end());
	int	y = *min_element(vector_->begin(), vector_->end());

	return (x - y);
}

const char * Span::NoMoreSpace::what() const throw()
{
	return ("No more space in SPAN\n");
}

const char * Span::SpanTooShort::what() const throw()
{
	return ("SPAN is too short\n");
}
