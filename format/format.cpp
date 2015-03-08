#include "format.hpp"

std::string ft::_toString(std::map<std::string, std::string> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "{ ";
	for (auto key : arg)
	{
		if (count != 0)
			o << ", ";
		o << '"'<< ft::_toString(key.first) << '"';
		o << ": ";
		o << '"'<< ft::_toString(key.second) << '"';
		count++;
	}
	o << " }";
	return(o.str());
}

std::string ft::_toString(std::list<std::string> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "[";
	for (auto elem : arg)
	{
		if (count != 0)
			o << ", ";
		o << '"' <<ft::_toString(elem) << '"';
		count++;
	}
	o <<"]";
	return(o.str());
}

std::string ft::_toString(std::list<ft::string> arg)
{
	int count = 0;
	std::ostringstream o;
	o << "[";
	for (auto elem : arg)
	{
		if (count != 0)
			o << ", ";
		o << '"' <<ft::_toString(elem) << '"';
		count++;
	}
	o <<"]";
	return(o.str());
}