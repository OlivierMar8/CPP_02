//Fixed.cpp CPP01   ex02

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_dec = 8;

Fixed::Fixed( void ) {

	this->_f_value = 0;
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int i ) {

	this->_f_value = (i << Fixed::_dec);
	std::cout << "Int Constructor called" << std::endl;
	return;
}

Fixed::Fixed( const float f ) {

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
			this->_f_value = rhs.getF_Value();
		return *this;
}

Fixed Fixed::operator+( const Fixed & rhs) const {

		std::cout << "Copy assignement operator called" << std::endl;

		return Fixed( this->_f_value + rhs.getF_Value());
}
//ci-dessous a faire
//
int		Fixed::getF_Value( void ) const {

		return this->_f_value;
}

void	Fixed::setF_Value( int const raw ) {

		this->_f_value = raw;
		return;
}

float	Fixed::toFloat( void ) const {
	//false
		return ((float)this->_f_value / (float)(1 <<Fixed::_dec));
}

int		Fixed::toInt( void ) const {
	//false
		return (this->_f_value >> Fixed::_dec);
}


std::ostream &	operator<<( std::ostream & o, Fixed const & i) {

	o  << i.toFloat();

	return o;
}

