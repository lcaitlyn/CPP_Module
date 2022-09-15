#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point & copy);
	~Point();

	Fixed getX() const;
	Fixed getY() const;

	Point &operator=(const Point &assignment);

	bool operator==(const Point &compared);
};

std::ostream &operator<<(std::ostream &out, const Point &point);

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif