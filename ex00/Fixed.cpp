//Fixed.cpp CPP01   ex00

#include <iostream>
#include "Fixed.hpp"

const int	Fixed::_shift = 8;

Fixed::Fixed( void ) {

	this->_fixed = 0;
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}

Fixed &	Fixed::operator=( Fixed const & rhs) {

		std::cout << "Copy assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_fixed = rhs.getRawBits();
		return *this;
}

int		Fixed::getRawBits( void) const {

		std::cout << "getRawBits member function called" << std::endl;
		return this->_fixed;
}

void	Fixed::setRawBits( int const raw ) {

		std::cout << "setRawBits member function called" << std::endl;
		this->_fixed = raw;
		return;
}

/*
std::ostream &	operator<<( std::ostream & o, Fixed const & i) {

	o << "The value of _foo is : " << i.getFoo();

	return o;
}
*/
