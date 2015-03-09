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
		throw std::logic_error(this->getErr());
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

const char* ft::dlLoader::getErr() const {
	return (dlerror());
};