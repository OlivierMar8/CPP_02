//Fixed.cpp CPP01   ex02

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_shift = 8;

Fixed::Fixed( void ) {

	this->_fixed = 0;
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int i ) {

	this->_fixed = (i << Fixed::_shift);
	std::cout << "Int Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const float f ) {

	this->_fixed = round(f * ( 1 << Fixed::_shift));
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

bool	Fixed::operator>( Fixed const & rhs ) {

	return (_fixed > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs ) {

	return (_fixed < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) {

	return (_fixed >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs ) {

	return (_fixed <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) {

	return (_fixed == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) {

	return (_fixed != rhs.getRawBits());
}

Fixed &	Fixed::operator=( Fixed const & rhs) {

		std::cout << "Copy assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_fixed = rhs.getRawBits();
		return *this;
}

Fixed Fixed::operator+( Fixed const & rhs) const {

		std::cout << "Copy assignement operator called" << std::endl;

		return Fixed( this->toFloat() + rhs.toFloat());
}
//ci-dessous a faire
//
int		Fixed::getRawBits( void ) const {

		return this->_fixed;
}

void	Fixed::setRawBits( int const raw ) {

		this->_fixed = raw;
		return;
}

float	Fixed::toFloat( void ) const {

		return ((float)this->_fixed / (float)(1 <<Fixed::_shift));
}

int		Fixed::toInt( void ) const {

		return (this->_fixed >> Fixed::_shift);
}


std::ostream &	operator<<( std::ostream & o, Fixed const & i) {

	o  << i.toFloat();

	return o;
}

