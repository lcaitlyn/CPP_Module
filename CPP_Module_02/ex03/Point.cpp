#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point & copy) : x(copy.x), y(copy.y) {}

Point::~Point() {}

Fixed Point::getX() const { return x; }

Fixed Point::getY() const { return y; }

Point &Point::operator=(const Point &assignment) {
	if (this == &assignment)
		return *this;
	
	const_cast<Fixed &>(this->x) = assignment.getX();
	const_cast<Fixed &>(this->y) = assignment.getY();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Point &point) {
	out << "(" << point.getX() << ", " << point.getY() << ")";
	return out;
}

bool Point::operator==(const Point &compared) {
	return ((Fixed)x == compared.x && (Fixed)y == compared.y);
}