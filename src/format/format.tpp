#ifndef FORMAT_TPP
#define FORMAT_TPP
#include "format.hpp"

template<typename T>
std::string _toString(T arg)
{
	std::ostringstream o;
	o << arg;
	return(o.str());
}

template<typename T>
std::string _toString(std::list<T> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "[";
	for (auto elem : arg)
	{
		if (count != 0)
			o << ", ";
		o << _toString(elem);
		count++;
	}
	o <<"]";
	return(o.str());
}

template<typename KEY,typename value>
std::string _toString(std::map<KEY, value> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "{ ";
	for (auto key : arg)
	{
		if (count != 0)
			o << ", ";
		o << _toString(key.first);
		o << ": ";
		o <<  _toString(key.second);
		count++;
	}
	o << " }";
	return(o.str());
}

template<typename value>
std::string _toString(std::map<std::string, value> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "{ ";
	for (auto key : arg)
	{
		if (count != 0)
			o << ", ";
		o << '"' << _toString(key.first) << '"';
		o << ": ";
		o <<  _toString(key.second);
		count++;
	}
	o << " }";
	return(o.str());
}


template<typename T>
std::string format(T arg) {
	std::ostringstream o;
	o << _toString(arg);
	return(o.str());
}


template<typename T, typename... Args>
std::string format(T value, Args... args) {
	std::ostringstream o;
	o << _toString(value);
	o << " ";
	o << format(args...);
	return(o.str());
}

template<typename T>
std::string formatNS(T arg) {
	std::ostringstream o;
	o << _toString(arg);
	return(o.str());
}


template<typename T, typename... Args>
std::string formatNS(T value, Args... args) {
	std::ostringstream o;
	o << _toString(value);
	o << formatNS(args...);
	return(o.str());
}

#endif
