#ifndef UNIT_TEST_HPP
#define UNIT_TEST_HPP

#include <string>

#define C_BLUE "\033[33;34m"
#define C_RED  "\033[33;31m"
#define C_GREEN "\033[33;32m"
#define C_DEFAULT "\033[33;0m"

struct test_to_run {
	void (*ptrFnc)();
	std::string name;
};

void    assert(bool);
void    addtoTest(std::string,void (*ptrFnc)());
void    init();


# define TO_STRINGIFY(X) #X
# define ADDTOTEST(test_name) addtoTest(TO_STRINGIFY(test_name), test_name);

#endif