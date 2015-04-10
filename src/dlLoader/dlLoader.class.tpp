#ifndef DLLOADER_CLASS_TPP
#define DLLOADER_CLASS_TPP
#include "dlLoader.class.hpp"

template<typename T>
T ft::dlLoader::getSym(const char *symbol) {
	T tmp = reinterpret_cast<T>(dlsym(this->dl_handle, symbol));
	if(!tmp)
		throw std::logic_error(this->getErr());
	return (tmp);
};
#endif