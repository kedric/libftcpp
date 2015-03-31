#ifndef STRING_HPP
#define STRING_HPP
// #include "../libft.hpp"
#include <vector>
#include <algorithm>
#include <list>
#include <string>

namespace ft {
	class string : public std::string {
		public:
								string();
								string(const string &);
								string(const char *);
								string(const std::string &);
		ft::string&				operator=(const char *);
		ft::string&				operator=(const std::string &);

		ft::string 				toUpper();
		ft::string 				toUpper(int);
		ft::string 				toLower();
		ft::string 				toLower(int);
		bool 					isLower();
		bool 					isLower(int);
		bool					isUpper();
		bool 					isUpper(int);
		bool 					isSpace();
		bool 					isSpace(int);
		bool 					isPrint();
		bool 					isPrint(int);

		// convert
		float 					toFloat() const;
		double 					toDouble() const;
		int 					toInt() const;
		long int 				toLInt() const;
		long long int 			toLLInt() const;
		unsigned int 			toUInt() const;
		unsigned long int 		toULInt() const;
		unsigned long long int 	toULLInt() const;

		char 					*toStr();
		std::list<ft::string> 	split(const char *);

		ft::string 				ltrim();
		ft::string 				rtrim();
		ft::string 				trim();
		ft::string 				removeSpace();
		ft::string 				replace(ft::string, ft::string);
		ft::string 				replace(ft::string, ft::string, size_t n);

		ft::string 				remove(int pose);

		template<typename FA,typename... T>
		ft::string& format(FA firstArgs, T... args);
		template<typename FA>
		ft::string& format(FA firstArgs);
	};
}
#include "string.tpp"
#endif