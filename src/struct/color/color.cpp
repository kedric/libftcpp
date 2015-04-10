#include "color.hpp"
namespace ft{

color::color() : r(0), b(0), g(0) {};
color::color(ft::color const &in)
 : r(in.getRed()), b(in.getBlue()), g(in.getGreen()){ };
color::color(unsigned char red, unsigned char green, unsigned char blue)
 : r(red), b(blue), g(green){};
color &color::operator=(ft::color const &in){
	r = in.getRed();
	g = in.getGreen();
	b = in.getBlue();
	return(*this);
};
void color::setRed(unsigned char red){
	r = red;
};
void color::setGreen(unsigned char green){
	g = green; 
};
void color::setBlue(unsigned char blue){
	b = blue;
};
void color::setRGB(unsigned char red, unsigned char green, unsigned char blue){
	r = red;
	g = green;
	b = blue;
};
unsigned char color::getRed() const{
	return (r);
};
unsigned char color::getGreen() const{
	return (g);
};
unsigned char color::getBlue() const{
	return (b);
};

std::ostream &operator<<(std::ostream &o, ft::color const &color) {
	o << "{ R: " << color.getRed()
	<< " G: " << color.getGreen()
	<< " B:" << color.getBlue();
	return (o);
};

}