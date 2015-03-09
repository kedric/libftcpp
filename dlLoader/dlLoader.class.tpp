#ifndef DLLOADER_CLASS_TPP
#define DLLOADER_CLASS_TPP
#include "dlLoader.class.hpp"

template<typename T>
T ft::dlLoader::getSym(const char *symbol) {
	T tmp = (T)dlsym(this->dl_handle, symbol);
	if(!tmp)
		std::cerr << "dlSym error:" << this->getErr() << std::endl;
	return (tmp);
};
#endif