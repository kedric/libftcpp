#include "dlLoader.class.hpp"

ft::dlLoader::dlLoader(){};
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

bool ft::dlLoader::isOpen() {
	if (!this->dl_handle)
		return false;
	return true;
};

ft::dlLoader::dlLoader(const dlLoader &){};

ft::dlLoader::~dlLoader(){
	dlclose(this->dl_handle);
};

void *ft::dlLoader::getHandle() const { 
	return this->dl_handle;
};

template<typename T>
T ft::dlLoader::getSym(const char *symbol) {
	T tmp = dlsym(this->dl_handle, symbol);
	if(!tmp)
		ft::printErr("dlSym error:", this->getErr());
	return (tmp);
};

const char* getErr(){
	return (dlerror());
};