NAME = a.out

CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I include -I printf/include
LIBFTPRINTF_LIBRARY = printf/libftprintf.a

all: create_libftprintf_library $(NAME) run

$(NAME):
	$(CC) $(FLAGS) $(INCLUDES) main.c $(LIBFTPRINTF_LIBRARY)

create_libftprintf_library:
	git submodule update --init --recursive
	make -C printf/

run:
	clear && ./$(NAME) && rm a.out && rm printf/libftprintf.a

.PHONY: all fclean create_libftprintf_library run
