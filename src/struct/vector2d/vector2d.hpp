#ifndef VECTOR2D_HPP
# define VECTOR2D_HPP 

// # include "../../libft.hpp"
#include <iostream>
//! ^
//! |
//! |    y = row
//! y
//! |    x = col
//! | 
//!  ------- X ----->

namespace ft {
	struct vector2d {
		int 	x;
		int 	y;
						vector2d();
						vector2d(int,int);
						vector2d(vector2d const &);
		virtual 		~vector2d();
		void			setXY(int, int);
		ft::vector2d	operator-(ft::vector2d const &) const;
		ft::vector2d	operator+(ft::vector2d const &) const;
		ft::vector2d	&operator+=(ft::vector2d const &);
		ft::vector2d	&operator-=(ft::vector2d const &);
		ft::vector2d	&operator=(ft::vector2d const &);
		bool			operator==(ft::vector2d const & rhs) const;
		bool			operator!=(ft::vector2d const & rhs) const;
	};
}

std::ostream &operator<<(std::ostream &o, ft::vector2d const &);

#endif

