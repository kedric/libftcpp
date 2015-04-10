#include "test.hpp"

void any_test(){
	ft::string *b = new ft::string("hello"); 
	ft::any a(b);
	ft::any c;
	c = *b;

	assert(*a.getS<ft::string *>() == *b); 
	assert(a.getS<ft::string *>() == b); 
	assert((c.getS<ft::string *>() == b)); 
	assert((*c.getS<ft::string *>() == *b)); 
}