//Fixed.hpp	CPP01	ex01

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed {

	public:

		Fixed( void );					
		Fixed( const int i );
		Fixed( const float f );
		Fixed( const Fixed & src );		
		~Fixed( void );					

		Fixed &	operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt ( void ) const;


	private:

		int 				_fixed;
		static const int	_frac;

};

std::ostream &		operator<<( std::ostream & o, const Fixed & i );

#endif
