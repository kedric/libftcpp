#ifndef COLOR_HPP
#define COLOR_HPP
#include <cstddef>
#include <iostream>

namespace ft{
	struct color {
		unsigned char r; 
		unsigned char b;
		unsigned char g; 

		color();
		color(ft::color const &in);
		color(unsigned char, unsigned char, unsigned char);
		color &operator=(ft::color const &in);
		void setRed(unsigned char);
		void setGreen(unsigned char);
		void setBlue(unsigned char);
		void setRGB(unsigned char, unsigned char, unsigned char);
		unsigned char getRed() const;
		unsigned char getGreen() const;
		unsigned char getBlue() const;
	};
};

std::ostream &operator<<(std::ostream &o, ft::color const &);
#endif