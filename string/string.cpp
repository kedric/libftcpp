#include "string.hpp"
#include <cstring>
ft::string::string() : std::string() {};
ft::string::string(const ft::string & in)  : std::string(in) {};
ft::string::string(const std::string & in)  : std::string(in) {};
ft::string::string(const char * in)  : std::string(in) {};

ft::string &ft::string::operator=(const char *in){
		std::string::operator=(in);
		return *this;
};

ft::string &ft::string::operator=(const std::string &in){
		std::string::operator=(in);
		return *this;
};

ft::string ft::string::toUpper() {
	ft::string tmp;
	
	for(auto c : *this) {
		tmp += std::toupper(c);
	};
	return (tmp);
};

ft::string ft::string::toUpper(int pose) {
	ft::string tmp(*this);
	tmp[pose] = std::toupper(tmp[pose]);
	return (tmp);
};

ft::string ft::string::toLower() {
	ft::string tmp;

	for(auto c : *this) {
		tmp += std::tolower(c);
	};
	return (tmp);
};

ft::string ft::string::toLower(int pose) {
	ft::string tmp(*this);
	tmp[pose] = std::tolower(tmp[pose]);
	return (tmp);
};

bool ft::string::isLower() {
	for(auto c : *this) {
		if (!std::islower(c))
			return false;
	};
	return (true);
};

bool ft::string::isLower(int pose) {
	return (std::islower((*this)[pose]));
};

bool ft::string::isUpper() {
	for(auto c : *this) {
		if (!std::isupper(c))
			return false;
	};
	return (true);
};

bool ft::string::isUpper(int pose) {
	return (std::isupper((*this)[pose]));
};

bool ft::string::isSpace() {
	for(auto c : *this) {
		if (!std::isspace(c))
			return false;
	};
	return (true);
};

bool ft::string::isSpace(int pose){
	return (std::isspace((*this)[pose]));
};

bool ft::string::isPrint() {
	for(auto c : *this) {
		if (!std::isprint(c))
			return false;
	};
	return (true);
};

bool ft::string::isPrint(int pose){
	return (std::isprint((*this)[pose]));
};

ft::string ft::string::ltrim() {
	for (size_t i = 0; i < this->length(); i++)
		if (!this->isSpace(i)){
			return(ft::string(this->substr(i)));
		}
	return(ft::string());
};

ft::string ft::string::rtrim() {
	for (int i = this->length() - 1; i > -1; i--)
		if (!this->isSpace(i)){
			return(ft::string(this->substr(0,++i)));
		}
	return(ft::string());
};

ft::string ft::string::trim() {
	return (this->ltrim().rtrim());
};

ft::string ft::string::removeSpace() {
	ft::string tmp;
	for(auto c : *this){
		if (::isspace(c))
			continue;
		tmp+=c;
	}
	return (tmp);
};

int ft::string::toInt() const {
	return (std::stoi(*this));
};

long int ft::string::toLInt() const {
	return (std::stol(*this));
};

long long int ft::string::toLLInt() const {
	return (std::stoll(*this));
};

unsigned int ft::string::toUInt() const {
	return (std::stoul(*this));
};

unsigned long int ft::string::toULInt() const {
	return (std::stoul(*this));
};

unsigned long long int ft::string::toULLInt() const {
	return (std::stoull(*this));
};

float ft::string::toFloat() const {
	return (std::stof(*this));
};

double ft::string::toDouble() const {
	return (std::stod(*this));
};


std::list<ft::string> ft::string::split(const char * delim) {
	std::list<ft::string> tmp_list;
	ft::string tmpString(*this);
	char *tmp = ::strtok(&(tmpString)[0], delim);
	while(tmp != NULL)
	{
		tmp_list.push_back(tmp);
		tmp = ::strtok(NULL, delim);
	};
	return (tmp_list);
};

ft::string ft::string::replace(ft::string from, ft::string to) {
	size_t pos;
	ft::string tmp = *this;

	pos = tmp.find(from);
	while (pos != std::string::npos) {
		tmp.std::string::replace(
				tmp.begin() + pos,
				tmp.begin() + pos + from.length(),
				to.c_str()
			);
		pos = tmp.find(from);
	}
	return(tmp);
};

ft::string ft::string::replace(ft::string from, ft::string to, size_t n) {
	size_t pos;
	ft::string tmp = *this;

	pos = tmp.find(from);
	while (pos != std::string::npos && n > 0) {
		tmp.std::string::replace(
				tmp.begin() + pos,
				tmp.begin() + pos + from.length(),
				to.c_str()
			);
		n--;
		pos = tmp.find(from);
	}
	return(tmp);
};

ft::string ft::string::remove(int pose) {
	ft::string tmp = *this;
	tmp.erase(tmp.begin() + pose);
	return(tmp);
};



