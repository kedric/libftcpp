#include "test.hpp"

// void initold() {
// 	std::string a = "salut";
// 	std::list<std::string> b;
// 	std::map<std::string,std::string> c;
// 	std::map<int,std::list<std::string>> d;
	
// 	ft::string e;
// 	e = "salut";
// 	e.format("hello");
// 	print(e); 
	
// 	b.push_back("et");
// 	b.push_back("la");
// 	b.push_back("sa");
// 	b.push_back("donne");
// 	b.push_back("quoi ?");

// 	c["a"] = "hoo";
// 	c["b"] = "sa marche aussi";
// 	c["c"] = "mais c trop de la bombe";
// 	d[1] = b;
// 	ft::print(b);
// 	std::cout << ft::format(b, ft::endl() ,a ,"hello", c, d) << std::endl;
// 	ft::print(ft::printC("R-|1G-|R|.|Y|B|C|M", "[","salut","]", "sa", a, "va", 1, 1.1f, 'a'));
// }

void format(){
	// numbers
	assert(ft::format(1) == "1");
	assert(ft::format(1.1f) == "1.1");
	assert(ft::format(1.1) == "1.1");
	// string
	std::string a = "salut";
	assert("salut salut" == ft::format(a, a));
}

