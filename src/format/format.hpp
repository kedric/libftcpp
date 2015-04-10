#ifndef FORMAT_HPP
#define FORMAT_HPP
#include "libft.hpp"

namespace ft {
class string;

/*
** _toString for format to output
** General Case
**
*/
template<typename T>
std::string _toString(T arg);

/*
** list case
*/
template<typename T>
std::string _toString(std::list<T> arg);
std::string _toString(std::list<std::string> arg);
std::string _toString(std::list<ft::string> arg);

/*
** Map case
*/
template<typename KEY,typename value>
std::string _toString(std::map<KEY, value> arg);
template<typename value>
std::string _toString(std::map<std::string, value> arg);
std::string _toString(std::map<std::string, std::string> arg);

/*
** format function
*/
template<typename T>
std::string format(T arg);
template<typename T, typename... Args>
std::string format(T value, Args... args);



#include "format.tpp"
};
#endif