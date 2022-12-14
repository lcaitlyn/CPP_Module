#include "Point.hpp"

int check(Point const a, Point const b, Point const point) {
	Fixed res;

	res = ((point.getX() - a.getX()) * (b.getY() - a.getY()) - (point.getY() - a.getY()) * (b.getX() - a.getX()));
	if (res > 0)
		return (1);
	return (0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	return ((check(a, b, point) > 0 && check(b,c,point) > 0 && check(c,a,point) > 0)
		|| (check(a, b, point) < 0 && check(b,c,point) < 0 && check(c,a,point) < 0))
		? true : false;
}