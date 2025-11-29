NAME = a.out

CC = cc
FLAGS = -Wall -Werror -Wextra -I include
INCLUDES = -I include -I libft/include
LIBFT = libft/
LIBFT_LIBRARY = libft.a

MAIN = main.c
TESTS = $(wildcard tests/*.c)

all: init_submodule create_libft_library $(NAME) delete_libft_library run

run:
	./$(NAME) && rm $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) $(MAIN) $(TESTS) $(LIBFT)/$(LIBFT_LIBRARY)

init_submodule:
	git submodule update --init --recursive

create_libft_library:
	make -C $(LIBFT)

delete_libft_library:
	make -C $(LIBFT) fclean

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all run clean fclean re init_submodule create_libft_library delete_libft_library
