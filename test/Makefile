
NAME        =   test

INCDIR      =   inc/

SRC         =   $(shell find . -type f | grep \.cpp ) \
				../test_framwork/unit_test.cpp

OBJ         =   $(SRC:.cpp=.o)

CC          =   c++

CFLAGS      = -std=c++11


OBJFLAG =  -O3 -Wextra -Werror -Wall -std=c++11 

LINK = ../libft.a


.PHONY: all re fclean

all: $(NAME)

libft:
	@make -C .. re 

$(NAME): $(OBJ) libft
	@$(CC) -o $(NAME) $(CFLAGS) -I$(INCDIR) $(OBJ) $(LINK)
	@./test
	@rm -rf ./test

%.o:%.cpp
	@$(CC) -c -o $@ $(OBJFLAG) $^ -I$(INCDIR) 

clean:
	@rm -f $(shell find . -type f | grep -v \.cpp | grep \.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all