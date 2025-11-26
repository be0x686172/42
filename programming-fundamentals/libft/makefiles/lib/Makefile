NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror -I include

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(NAME) $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
