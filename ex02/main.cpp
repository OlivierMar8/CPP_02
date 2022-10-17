//main.cpp	CPP02 ex02

#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2) );
	Fixed x( 11 );
	Fixed y( 22 );
	Fixed z;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b) << std::endl;

// ******************************************	
	z = x + y;
	std::cout << z.toFloat() <<std::endl;
	if ( y > x)
		std::cout << "True: " << y.toFloat() << " > " << x.toFloat()  << std::endl;
	else
		std::cout << "False: " << y.toFloat() << " > " << x.toFloat()  << std::endl;
	if ( x > y)
		std::cout << "True: " << x.toFloat() << " > " << y.toFloat()  << std::endl;
	else
		std::cout << "False: " << x.toFloat() << " > " << y.toFloat()  << std::endl;

	if ( y < z)
		std::cout << "True: " << y.toFloat() << " < " << z.toFloat()  << std::endl;
	else
		std::cout << "False: " << y.toFloat() << " < " << z.toFloat()  << std::endl;
	if ( z < y)
		std::cout << "True: " << z.toFloat() << " < " << y.toFloat()  << std::endl;
	else
		std::cout << "False: " << z.toFloat() << " < " << y.toFloat()  << std::endl;

	if ( y >= y)
		std::cout << "True: " << y.toFloat() << " >= " << y.toFloat()  << std::endl;
	else
		std::cout << "False: " << y.toFloat() << " >= " << y.toFloat()  << std::endl;

	if ( x <= y)
		std::cout << "True: " << x.toFloat() << " <= " << y.toFloat()  << std::endl;
	else
		std::cout << "False: " << x.toFloat() << " <= " << y.toFloat()  << std::endl;

	if ( y == x)
		std::cout << "True: " << y.toFloat() << " == " << x.toFloat()  << std::endl;
	else
		std::cout << "False: " << y.toFloat() << " == " << x.toFloat()  << std::endl;
	if ( z == x + y)
		std::cout << "True: " << z.toFloat() << " == " << x.toFloat()  << " + " << y.toFloat() << std::endl;
	else
		std::cout << "False: " << z.toFloat() << " == " << y.toFloat()  << " + " << y.toFloat() << std::endl;

	if ( y != x)
		std::cout << "True: " << y.toFloat() << " != " << x.toFloat()  << std::endl;
	else
		std::cout << "False: " << y.toFloat() << " != " << x.toFloat()  << std::endl;
	if ( x != x)
		std::cout << "True: " << x.toFloat() << " != " << x.toFloat()  << std::endl;
	else
		std::cout << "False: " << x.toFloat() << " != " << x.toFloat()  << std::endl;
	

	a = z + y;
	std::cout << a << " : " << z.toFloat() << " + " << y.toFloat()   << std::endl;
	a = z / y; 
	std::cout << a << " : " << z.toFloat() << " / " << y.toFloat()   << std::endl;
	a = y - z;
	std::cout << a << " : " << y.toFloat() << " - " << z.toFloat()   << std::endl;
	a = x * z;
	std::cout << a << " : " << x.toFloat() << " * " << z.toFloat()   << std::endl;

	std::cout << Fixed::max( a, b)  << std::endl;

	return 0;
}
