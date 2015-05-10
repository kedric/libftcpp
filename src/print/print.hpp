#ifndef PRINT_HPP
#define PRINT_HPP
#include "libft.hpp"

#define BOLD_TERM 		"1;"
#define DIM_TERM 		"2;"
#define UNDERLINE_TERM 	"3;"

#define RED_TERM        "31m"
#define GREEN_TERM      "32m"
#define YELLOW_TERM     "33m"
#define BLUE_TERM       "34m"
#define MAGENTA_TERM    "35m"
#define CYAN_TERM       "36m"

#define RESET_TERM "\033[0m"

namespace ft{
/*
** warp of std::endl;
*/
std::string endl();

/*
** print cout function
*/
template<typename T>
int print(T const &value);
template<typename T, typename... Args>
int print(T const &value, Args const &... args);

/*
** print cerr function
*/
template<typename T, typename... Args>
int printErr(T value, Args... args);
template<typename T>
int printErr(T value);

/*
** print colors function
** formating : for escape space use '-'
** color : R,G,B,Y,M,C,. (. = no color)
** modificator : 1:bold, 2:dim, 3:underline // wait for fix
** exemple : "R-|1G-|R|G|Y|B|C|M"
*/
template<typename T, typename... Args>
int printC(const char* color,T value, Args... args);
template<typename T>
int printC(const char* color,T value);
const char* getMod(char c);
const char* getColor(char c);

#include "print.tpp"
}
#endif