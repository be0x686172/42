NAME = a.out

CC = cc
FLAGS = -Wall -Werror -Wextra -I include
INCLUDES = -I include -I libft/include
LIBFT = libft/

MAIN = main.c
TESTS = $(wildcard tests/*.c)

all: create_libft_library $(NAME) run

run:
	./$(NAME) && rm $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) -L $(LIBFT) $(MAIN) $(TESTS) -lft

create_libft_library:
	make -C $(LIBFT)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all run clean fclean re
