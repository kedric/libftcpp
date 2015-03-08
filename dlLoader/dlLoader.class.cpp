#include "dlLoader.class.hpp"

ft::dlLoader::dlLoader(){};

ft::dlLoader::dlLoader(const dlLoader & in){
	this->dl_handle = in.getHandle();
};

ft::dlLoader &ft::dlLoader::operator=(const dlLoader &in) {
	this->dl_handle = in.getHandle();
	return(*this);
};
ft::dlLoader::dlLoader(const char *path, int flag){
	this->open(path, flag);
};

void ft::dlLoader::open(const char *path, int flag){
	this->dl_handle = dlopen(path, flag);
	if (!this->dl_handle)
		ft::printErr("dlopen error:", this->getErr());
};

bool ft::dlLoader::isOpen() const {
	if (!this->dl_handle)
		return false;
	return true;
};

void ft::dlLoader::close(){
	dlclose(this->dl_handle);
};

ft::dlLoader::~dlLoader(){
	this->close();
};

void *ft::dlLoader::getHandle() const { 
	return this->dl_handle;
};

template<typename T>
T ft::dlLoader::getSym(const char *symbol) {
	T tmp = static_cast<T>(dlsym(this->dl_handle, symbol));
	if(!tmp)
		ft::printErr("dlSym error:", this->getErr());
	return (tmp);
};

const char* ft::dlLoader::getErr() const {
	return (dlerror());
};