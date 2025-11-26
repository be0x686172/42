NAME = a.out

CC = cc
FLAGS = -Wall -Werror -Wextra -I include

MAIN = main.c
SRC = $(wildcard src/*.c)
TESTS = $(wildcard tests/*.c)

all: run

run: $(NAME)
	./$(NAME) && rm $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(MAIN) $(SRC) $(TESTS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all run clean fclean re
