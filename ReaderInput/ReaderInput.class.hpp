
#ifndef READERINPUT_CLASS_HPP
# define READERINPUT_CLASS_HPP

# include <string>
# include <iostream>
# include <istream>
# include <fstream>
namespace ft{
class ReaderInput {
    private:
    	bool			_isFile;
    	std::ifstream 	*_file;
    	size_t			_line;

    	template<typename T>
    	bool	_getLine(T& input ,std::string &);
    public:
virtual                ~ReaderInput( void  );
                        ReaderInput( void  );
                        ReaderInput(const char *path);
                        ReaderInput(ReaderInput const & in);
bool		          	getLine(std::string &);
size_t					getLineNB() const;
void					setFilePath(std::string const &);
ReaderInput&         operator=(ReaderInput const & in);
};

std::ostream & operator<<(std::ostream& o, ReaderInput const & p);
}
#endif

