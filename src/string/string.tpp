#ifndef STRING_TPP
#define STRING_TPP
#include "string.hpp"
#include <iostream>


template<typename FA,typename... T>
ft::string& ft::string::format(FA firstArgs, T... args){
	std::string::operator=(format(*this, firstArgs, args...));
	return (*this);
};

template<typename FA>
ft::string& ft::string::format(FA firstArgs){
	std::string::operator=(format(*this, firstArgs));
	return (*this);
};

#endif