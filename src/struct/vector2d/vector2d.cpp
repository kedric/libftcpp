#include "vector2d.hpp"

ft::vector2d::vector2d(int x,int y) : x(x), y(y) {};
ft::vector2d::vector2d() : x(0), y(0) {};
ft::vector2d::~vector2d(){};
ft::vector2d::vector2d(vector2d const & in) : x(in.x), y(in.y) {};

void ft::vector2d::setXY(int x, int y) {
	this->x = x;
	this->y = y;
}

ft::vector2d  ft::vector2d::operator+(ft::vector2d const & rhs) const {
	return(ft::vector2d(this->x + rhs.x, this->y + rhs.y));
};


ft::vector2d  ft::vector2d::operator-(ft::vector2d const & rhs) const{
	return(ft::vector2d(this->x - rhs.x, this->y - rhs.y));
};


ft::vector2d  &ft::vector2d::operator=(ft::vector2d const & rhs) {
	this->x = rhs.x;
	this->y = rhs.y;
	return(*this);
};

ft::vector2d  &ft::vector2d::operator+=(ft::vector2d const & rhs) {
	*this = *this + rhs;
	return(*this);
};

ft::vector2d  &ft::vector2d::operator-=(ft::vector2d const & rhs) {
	*this = *this - rhs;
	return(*this);
};

bool 			ft::vector2d::operator==(ft::vector2d const & rhs) const{
	return (this->x == rhs.x && this->y == rhs.y);
};

bool 			ft::vector2d::operator!=(ft::vector2d const & rhs) const{
	return (!(*this == rhs));
};

std::ostream &operator<<(std::ostream &o, ft::vector2d const &in) {
	o << "{ x:" << in.x << ", y:" << in.y << " }";
	return (o);
};
