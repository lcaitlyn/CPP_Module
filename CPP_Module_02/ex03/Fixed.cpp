#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value) {	this->value = value << bit; }

Fixed::Fixed(const float value) { this->value = (int)roundf(value * (1 << bit)); }

Fixed::Fixed(const Fixed &copy) : value(copy.value) {}

Fixed::~Fixed() {}

Fixed & Fixed::operator=(const Fixed &assignment) {
	if (this == &assignment)
		return *this;

	value = assignment.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const { return (float)value / (1 << bit); }

int Fixed::toInt( void ) const { return value >> bit; }

int Fixed::getRawBits( void ) const { return value; }

void Fixed::setRawBits( int const raw ) { value = raw; }


bool Fixed::operator==(const Fixed &compared) {
	return this->getRawBits() == compared.getRawBits();
}

bool Fixed::operator!=(const Fixed &compared) {
	return this->getRawBits() != compared.getRawBits();
}

bool Fixed::operator<(const Fixed &compared) {
	return this->getRawBits() < compared.getRawBits();
}

bool Fixed::operator>(const Fixed &compared) {
	return this->getRawBits() > compared.getRawBits();
}

bool Fixed::operator<=(const Fixed &compared) {
	return this->getRawBits() <= compared.getRawBits();
}

bool Fixed::operator>=(const Fixed &compared) {
	return this->getRawBits() >= compared.getRawBits();
}

Fixed Fixed::operator+(const Fixed &summation) {
	return Fixed(this->toFloat() + summation.toFloat());
}

Fixed Fixed::operator-(const Fixed &subtracted) {
	return Fixed(this->toFloat() - subtracted.toFloat());
}

Fixed Fixed::operator*(const Fixed &multiplier) {
	Fixed result;
	result.setRawBits((long)this->getRawBits() * (long)multiplier.getRawBits() >> bit);
	return result;
}

Fixed Fixed::operator/(const Fixed &devider) {
	Fixed result;
	result.setRawBits((this->value << bit) / devider.value);
	return result;
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}
