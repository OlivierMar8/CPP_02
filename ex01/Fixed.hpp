//Fixed.hpp	CPP01	ex01

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:

		Fixed( void );					
		Fixed( int const i );
		Fixed( float const f );
		Fixed( Fixed const & src );		
		~Fixed( void );					

		Fixed &	operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt ( void ) const;


	private:

		int 				_f_value;
		static const int	_dec;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
