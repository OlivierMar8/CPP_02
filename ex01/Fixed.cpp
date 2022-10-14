//Fixed.cpp CPP01   ex01

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed( void ) {

	this->_fixed = 0;
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int i ) {

	this->_fixed = i;
	std::cout << "Int Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const float f ) {

	this->_fixed = f;
	std::cout << "FALSE float Constructor called" << std::endl;
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

	//	std::cout << "getRawBits member function called" << std::endl;
		return this->_fixed;
}

void	Fixed::setRawBits( int const raw ) {

	//	std::cout << "setRawBits member function called" << std::endl;
		this->_fixed = raw;
		return;
}

float	Fixed::toFloat( void ) const {
	//false
		return this->_fixed;
}

int		Fixed::toInt( void ) const {
	//false
		return this->_fixed;
}


std::ostream &	operator<<( std::ostream & o, Fixed const & i) {

	o  << i.getRawBits();

	return o;
}

