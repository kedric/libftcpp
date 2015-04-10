#ifndef ANY_CLASS_HPP
#define ANY_CLASS_HPP
#include <iostream>
namespace ft{
	class any {
		protected:
		private:
			void	* value;
			int		type;
		public:
			any();
			virtual ~any();
			template<typename T>
			any(T & v) : value(&v), type(-1){ };
			template<typename T>
			any(T * v) : value(v), type(-1){ };

			any(const ft::any &);

			template<typename T>
			any(T & v, int type) : value(&v), type(type){ };
			template<typename T>
			any(T * v, int type) : value(v), type(type){ };

			ft::any &operator=(const ft::any &);

			template<typename T>
			T get() const { return dynamic_cast<T>(this->value); };
			template<typename T>
			T getS() { return static_cast<T>(this->value); };
			template<typename T>
			void 	setValue(T * in) { this->value = in;};
			template<typename T>
			void 	setValue(T * in, int type) 
				{ this->value = in; this->type = type; };
			
			void	*getPtr() const;
			int 	getType() const;
			void 	setType(int type);
	};
};
std::ostream &operator<<(std::ostream &o, const ft::any & rhs);
#endif