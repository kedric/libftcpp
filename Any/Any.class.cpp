#include "any.class.hpp"

ft::any::any() : value(), type(-1) {};
ft::any::any(const ft::any &in) : value(in.getPtr()), type(in.getType()) {};
ft::any::~any(){}
;
int ft::any::getType() const { 
	return this->type;
};

void *ft::any::getPtr() const{
	return this->value;
};

ft::any &ft::any::operator=(const ft::any &in){
	this->value = in.getPtr();
	this->type = in.getType();
	return(*this);
};

void 	ft::any::setType(int type) {
	this->type = type;
};

std::ostream &operator<<(std::ostream &o, const ft::any & rhs){
	o << "{ Address: " << rhs.getPtr() 
	<< ", type: " << rhs.getType() <<" }";
	return o;
};