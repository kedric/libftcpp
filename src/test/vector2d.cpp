#include "test.hpp"

void vector2d_test(){
	ft::vector2d a;
	ft::vector2d b(10,5);
	ft::vector2d c(b);

	assert(a.x == 0 && a.y == 0); // standard constructore
	assert(b.x == 10 && b.y == 5); // constructor with params
	assert(c.x == 10 && c.y == 5); // copy constructor
	
	a = b + c;
	assert(a.x == 20 && a.y == 10); // test add

	a += c; // = 30, 15
	assert(a.x == 30 && a.y == 15); // test +=

	a.setXY(1,1);
	assert(a.x == 1 && a.y == 1); // setXY(1,1)
	
	a = b - c; // = 0, 0
	assert(a.x == 0 && a.y == 0); // test substrac

	a -= c; // = -10, -5
	assert(a.x == -10 && a.y == -5); // test substrac

	assert(c == b); //test egual

	assert(!(c != b)); //test diff

};