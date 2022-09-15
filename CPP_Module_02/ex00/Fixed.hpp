#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &assignment);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif