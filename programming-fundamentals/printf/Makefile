NAME = a.out

CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I include -I printf/include
LIBFTPRINTF_LIBRARY = printf/libftprintf.a

all: create_libftprintf_library $(NAME) run

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) main.c $(LIBFTPRINTF_LIBRARY)

create_libftprintf_library:
	make -C printf/

run:
	clear && ./$(NAME) && rm a.out

.PHONY: all fclean create_libftprintf_library run
