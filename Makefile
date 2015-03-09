NAME        =   libft.a

INCDIR      =   inc/

SRC         =   format/format.cpp \
				print/print.cpp \
				string/string.cpp \
				Any/Any.class.cpp \
				struct/vector2d/vector2d.cpp

OBJ         =   $(SRC:.cpp=.o)

CC          =   c++

CFLAGS      = -std=c++11


OBJFLAG =  -O3 -Wextra -Werror -Wall -std=c++11 


.PHONY: all re fclean

all: bin/$(NAME)


bin/$(NAME): $(OBJ) | bin
	@ar rc $@ $? 
	@echo "[Compilation $(NAME) ok]"

%.o:%.cpp
	@$(CC) -c -o $@ $(OBJFLAG) $^ -I$(INCDIR) 

bin:
	@mkdir -p $@

clean:
	@rm -rf $(OBJ)
	@echo "[$(RED)Supression des .o de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

fclean: clean
	@rm -rf bin
	@echo "[$(RED)Supression de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

re: fclean all

run_test:
	@make -C test 