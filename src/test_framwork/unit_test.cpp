#include "unit_test.hpp"
#include <iostream>

static size_t test = 0;
static size_t test_ok = 0;
static size_t total_test = 0;
static size_t total_test_ok = 0;

void assert(bool result){
	test++;
	total_test++;
	if (result == true) {
		test_ok++;
		total_test_ok++;
		std::cout << C_GREEN << ".";
	}
	if (result == false){
		std::cout << C_RED << "X";
	}
	std::cout << C_DEFAULT;
};

void addtoTest(std::string name,void (*ptrFnc)()){
	std::cout << C_BLUE << name << C_DEFAULT << ": ";
	ptrFnc();
	std::cout << " " << test_ok << "/" << test << std::endl;
	test = test_ok = 0;
};

int main() { 
	init();
	std::cout << total_test_ok << "/" << total_test << std::endl;
}

