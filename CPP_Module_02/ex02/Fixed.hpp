#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	
	Fixed &operator=(const Fixed &assignment);

	bool operator==(const Fixed &compared);
	bool operator!=(const Fixed &compared);
	bool operator<(const Fixed &compared);
	bool operator>(const Fixed &compared);
	bool operator<=(const Fixed &compared);
	bool operator>=(const Fixed &compared);

	Fixed operator+(const Fixed &summation);
	Fixed operator-(const Fixed &subtracted);
	Fixed operator*(const Fixed &multiplier);
	Fixed operator/(const Fixed &devider);

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif