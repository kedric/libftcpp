#ifndef PRINT_TPP
#define PRINT_TPP
#include "print.hpp"

template<typename T>
int print(T const &value) {
	std::string tmp(format(value));
	std::cout << tmp << std::endl;
	return(tmp.length());
}

template<typename T, typename... Args>
int print(T const &value, Args const &... args) {
	std::string tmp(format(value, args...));
	std::cout << tmp << std::endl;
	return(tmp.length());
}

template<typename T>
int printErr(T value) {
	std::string tmp(format(value));
	std::cerr << tmp << std::endl;
	return(tmp.length());
}

template<typename T, typename... Args>
int printErr(T value, Args... args) {
	std::string tmp(format(value, args...));
	std::cerr << tmp << std::endl;
	return(tmp.length());
}

template<typename T>
int printC(const char* color,T value) {
	int move = 1;
	std::string tmp("\033[");
	tmp += ft::getMod(color[move - 1]);
	if (tmp.length() > 2)
		move++;
	tmp += ft::getColor(color[move - 1]);
	tmp += format(value);
	tmp += RESET_TERM;
	std::cout << tmp << std::endl;
	return(tmp.length() + 1);
}

template<typename T, typename... Args>
int printC(const char* color,T value, Args... args) {
	int move = 1; // for move color string
	std::string tmp("\033[");
	
	tmp += ft::getMod(color[move - 1]);
	if (tmp.length() > 2)
		move++;
	tmp += ft::getColor(color[move - 1]);
	tmp += format(value);
	tmp += RESET_TERM;
	
	if (color[move] == '|' || color[move] == '\0') {
		tmp += " ";
		move++;
	} else {
		move += 2;
	}
	std::cout << tmp;
	if (color[move - 1] != '\0')
		return(tmp.length() + printC(color + move , args...));
	else{
		return(tmp.length() + print(args...));
	}
	return(tmp.length());
}
#endif