NAME = Harl
CFLAG = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp
OBJ = main.o Harl.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: re all clean