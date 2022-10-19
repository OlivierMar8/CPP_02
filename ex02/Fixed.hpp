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

		bool	operator>( Fixed const & rhs ) const;
		bool	operator<( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;

		Fixed &	operator=( Fixed const & rhs );
		Fixed operator+( Fixed const & rhs ) const;
		Fixed operator-( Fixed const & rhs ) const;
		Fixed operator*( Fixed const & rhs ) const;
		Fixed operator/( Fixed const & rhs ) const;


		Fixed operator+( void ) const; //unaire
		Fixed operator-( void ) const; //unaire

		Fixed operator++( void );
		Fixed operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );

		static Fixed & min( Fixed & f1, Fixed & f2 );
		static Fixed const & min( Fixed const & f1, Fixed const & f2 );
		static Fixed & max( Fixed & f1, Fixed & f2 );
		static Fixed const & max( Fixed const & f1, Fixed const & f2 );


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
