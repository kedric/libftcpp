#ifndef DLLOADER_CLASS_CPP
#define DLLOADER_CLASS_CPP
#include <dlfcn.h>
#include "../libft.hpp"
namespace ft {
	class dlLoader {
	private:
		void *dl_handle;
	public:
		dlLoader();
		dlLoader(const dlLoader &);
		dlLoader(const char *, int flag);
		virtual ~dlLoader();
		dlLoader &operator=(const dlLoader &);

		void open(const char *, int flag);
		bool isOpen();

		template<typename T>
		T getSym(const char *);
		
		void *getHandle() const;
		const char* getErr();
		
	};
};
std::ostream &operator<<(std::ostream &o, const ft::dlLoader& rhs);
#endif