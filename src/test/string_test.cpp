#include "test.hpp"

void string_test() {
	ft::string a("salut");
	
	assert(a == "salut");

	a = a.toUpper();
	assert(a == "SALUT");

	a = a.toLower();
	assert(a == "salut");

	a = a.toUpper(0);
	assert(a == "Salut");

	assert(a.isPrint());
	
	a = "Salut\n"; 
	assert(!a.isPrint());
	
	a = " \t\r\n";
	assert(a.isSpace());
	
	a = " \t\t\t\no\t\t";
	assert(!a.isSpace());

	assert(a.ltrim() == "o\t\t");
	
	assert(a.rtrim() == " \t\t\t\no");
	
	assert(a.trim() == "o");

	a = "salut sa marche";
	assert(a.replace("salut", "merde") == "merde sa marche");
	
	a = "salut salut salut sa marche";
	assert(a.replace("salut", "merde") == "merde merde merde sa marche");
	
	a = "salut salut salut sa marche";
	assert(a.replace("salut", "merde", 2) == "merde merde salut sa marche");
	// ft::print(a.remove(1));
};	

