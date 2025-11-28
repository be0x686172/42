NAME = a.out

CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I include -I libft/include
LIBFT = libft/

MAIN = main.c
SRC = $(wildcard src/*.c)

all: create_libft_library $(NAME) run

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) -L $(LIBFT) $(MAIN) $(SRC) -lft

run:
	./$(NAME) && rm $(NAME)

create_libft_library:
	make -C $(LIBFT)

fclean:
	rm $(NAME)

.PHONY: all run create_libft_library fclean
