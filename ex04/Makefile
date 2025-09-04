NAME = Replace
CFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp
OBJ = main.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: re all clean