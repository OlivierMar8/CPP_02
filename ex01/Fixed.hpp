//Fixed.hpp	CPP01	ex01

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:

		Fixed( void );					
		Fixed( const int i );
		Fixed( const float f );
		Fixed( const Fixed & src );		
		~Fixed( void );					

		Fixed &	operator=( const Fixed & rhs );

		int			getF_Value( void ) const;
		void		setF_Value( const int raw );
		float		toFloat( void ) const;
		int			toInt ( void ) const;


	private:

		int 				_f_value;
		static const int	_dec;
};

std::ostream &		operator<<( std::ostream & o, const Fixed & i );

#endif
