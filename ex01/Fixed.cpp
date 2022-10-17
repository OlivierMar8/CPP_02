//Fixed.cpp CPP01   ex01

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_dec = 8;

Fixed::Fixed( void ) {

	this->_f_value = 0;
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const i ) {

	this->_f_value = (i << Fixed::_dec);
	std::cout << "Int Constructor called" << std::endl;
	return;
}

Fixed::Fixed( float const f ) {

	this->_f_value = round(f * ( 1 << Fixed::_dec));
	std::cout << "Float Constructor called" << std::endl;
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
			this->_f_value = rhs.getRawBits();
		return *this;
}

int		Fixed::getRawBits( void ) const {

		return this->_f_value;
}

void	Fixed::setRawBits( int const raw ) {

		this->_f_value = raw;
		return;
}

float	Fixed::toFloat( void ) const {

		return ((float)this->_f_value / (float)(1 <<Fixed::_dec));
}

int		Fixed::toInt( void ) const {

		return (this->_f_value >> Fixed::_dec);
}


std::ostream &	operator<<( std::ostream & o, Fixed const & i) {

	o  << i.toFloat();

	return o;
}

