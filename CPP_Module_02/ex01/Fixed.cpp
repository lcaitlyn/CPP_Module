#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << bit;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed &copy) : value(copy.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assignment) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &assignment)
		return *this;

	value = assignment.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

float Fixed::toFloat( void ) const {
	return (float)value / (1 << bit);
}

int Fixed::toInt( void ) const {
	return value >> bit;
}

int Fixed::getRawBits( void ) const { return value; }

void Fixed::setRawBits( int const raw ) { value = raw; }
