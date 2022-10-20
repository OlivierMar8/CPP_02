//Fixed.cpp CPP01   ex02

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_shift = 8;

Fixed::Fixed( void ) {

	this->_fixed = 0;
	return;
}

Fixed::Fixed( const int i ) {

	this->_fixed = (i << Fixed::_shift);
	return;
}

Fixed::Fixed( const float f ) {

	this->_fixed = round(f * ( 1 << Fixed::_shift));
	return;
}

Fixed::Fixed( Fixed const & src )  {

	*this = src;
	return;
}

Fixed::~Fixed( void ) {

		return;
}

bool	Fixed::operator>( Fixed const & rhs ) const {

	return (_fixed > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs ) const {

	return (_fixed < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) const {

	return (_fixed >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs ) const {

	return (_fixed <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) const {

	return (_fixed == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) const {

	return (_fixed != rhs.getRawBits());
}

Fixed &	Fixed::operator=( Fixed const & rhs) {

		if ( this != &rhs )
			this->_fixed = rhs.getRawBits();
		return *this;
}

Fixed Fixed::operator+( Fixed const & rhs) const {

		return Fixed( this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-( Fixed const & rhs) const {

		return Fixed( this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs) const {

		return Fixed( this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs) const {

		return Fixed( this->toFloat() / rhs.toFloat());
}


Fixed Fixed::operator+( void ) const {

	return Fixed(this->toFloat());
}

Fixed Fixed::operator-( void ) const {

	return Fixed(-this->toFloat());
}

Fixed Fixed::operator++( void ) {

		this->_fixed++;
		return *this;
}

Fixed Fixed::operator--( void ) {

		this->_fixed--;
		return *this;
}

Fixed Fixed::operator++( int ) {

		Fixed tmp( *this );

			this->_fixed++;
		return (tmp);
}

Fixed Fixed::operator--( int ) {

		Fixed tmp( *this );
			this->_fixed--;
		return tmp;
}

Fixed & Fixed::min( Fixed & f1, Fixed & f2 ) {

	if ( f1 <= f2)
		return f1;
	return f2;
}

Fixed const & Fixed::min( Fixed const & f1, Fixed const & f2 ) {

	if ( f1 <= f2)
		return f1;
	return f2;
}

Fixed & Fixed::max( Fixed & f1, Fixed & f2 ) {

	if ( f1 >= f2)
		return f1;
	return f2;
}

Fixed const & Fixed::max( Fixed const & f1, Fixed const & f2 ) {

	if ( f1 >= f2)
		return f1;
	return f2;
}

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

