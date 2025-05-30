NAME = push_swap

SRC = $(wildcard src/utils/*.c) \
	$(wildcard src/op/*.c) \
	src/main.c

INCLUDE = include

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	clear

fclean: clean
	rm -f $(NAME)
	clear

re: fclean all

run: re
	./$(NAME) 4 2 3 1

.PHONY: all clean fclean re
