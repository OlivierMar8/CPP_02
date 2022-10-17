//Fixed.hpp	CPP01	ex02

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

		bool	operator>( Fixed const & rhs );
		bool	operator<( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );

		Fixed &	operator=( Fixed const & rhs );
		Fixed operator+( Fixed const & rhs ) const;
/*		Fixed &	operator-( Fixed const & rhs );
		Fixed &	operator*( Fixed const & rhs );
		Fixed &	operator/( Fixed const & rhs );

		Fixed &	operator++( Fixed const & rhs );
		Fixed &	operator--( Fixed const & rhs );
		Fixed &	operator++( Fixed const & rhs );
		Fixed &	operator--( Fixed const & rhs );
		Fixed & min( Fixed f1, Fixed f2 ) const;
		Fixed & min( Fixed const f1, Fixed const f2 ) const;
		Fixed & max( Fixed f1, Fixed f2 ) const;
		Fixed & max( Fixed const f1, Fixed const f2 ) const;
*/

		int			getRawBits( void ) const;
		void		setRawBits( const int raw );
		float		toFloat( void ) const;
		int			toInt ( void ) const;

	private:

		int 				_fixed;
		static const int	_shift;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
