NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror -I include

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME) clean clear

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

clear:
	clear

re: fclean all

.PHONY: all clean fclean clear re
