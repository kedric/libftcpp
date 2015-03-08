#include "print.hpp"

std::string ft::endl() {
	std::ostringstream o;
	o << std::endl;
	return o.str();
}

const char* ft::getColor(char c)
{
	switch(c)
	{
		case 'R':
			return RED_TERM;
		case 'G':
			return GREEN_TERM;
		case 'Y':
			return YELLOW_TERM;
		case 'B':
			return BLUE_TERM;
		case 'M':
			return MAGENTA_TERM;
		case 'C':
			return CYAN_TERM;
		case '.':
			return "0m";
	}
	return RESET_TERM;
}

const char* ft::getMod(char c)
{
	switch(c)
	{
		case '1':
			return BOLD_TERM;
		case '2':
			return DIM_TERM;
		case '3':
			return UNDERLINE_TERM;
	}
	return "";
}