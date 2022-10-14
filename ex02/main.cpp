//main.cpp	CPP02 ex02

#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
//	Fxe const b( Fixed( 5.05f ) * Fixed( 2) );
	Fixed x( 11 );
	Fixed y( 22 );
	Fixed z;

	z = x + y;
	std::cout << z <<std::endl;

/*	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b)  << std::endl;
*/
	return 0;
}
