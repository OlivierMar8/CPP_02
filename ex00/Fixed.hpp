//Fixed.hpp	CPP01	ex00

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed {

	public:

		Fixed( void );					
		Fixed( Fixed const & src );		
		~Fixed( void );					

		Fixed &	operator=( Fixed const & rhs );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );


	private:

		int 				_fixed;
		static const int	_frac;

};

//std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
