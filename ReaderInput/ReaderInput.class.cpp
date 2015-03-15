#include "ReaderInput.class.hpp"

namespace ft{
ReaderInput::~ReaderInput(void) {
	if (_isFile)
		delete _file;
};

ReaderInput::ReaderInput(void) : _isFile(false), _line(0) {

};

ReaderInput::ReaderInput(const char *path) : _isFile(true), _line(0) {
	 _file = new std::ifstream;
	 _file->open(path, std::ios::in);
     if (!_file->is_open())
     	throw("error open");
};

ReaderInput::ReaderInput(ReaderInput const & in) {
    (void)in;
};

ReaderInput&          ReaderInput::operator=(ReaderInput const & in) {
    (void)in;
    return(*this);
};

std::ostream & operator<<(std::ostream& o, ReaderInput const & p) {
    (void)p;
    return(o);
};

template<typename T>
bool	ReaderInput::_getLine(T& input , std::string &buff) {
	if (getline(input, buff)){
			_line++;
			return (true);
		} else
			return (false);
};

bool ReaderInput::getLine(std::string &buff){
	if (_isFile)
		return (_getLine(*_file, buff));
	else
		return (_getLine(std::cin, buff));
};

void ReaderInput::setFilePath(std::string const &path){
	if (_isFile)
		delete _file;
	_line = 0;
	_isFile = true;
	_file = new std::ifstream;
	_file->open(path, std::ios::in);
	if (!_file->is_open())
		throw("error open");
};

size_t	ReaderInput::getLineNB() const {
	return (_line);
};

}