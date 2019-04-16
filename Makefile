##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile of the project
##

NAME=	102architect

CFLAGS=	-I include

SRC=	$(wildcard src/*.c)

OBJ=	$(SRC:.c=.o)

all:	LIB $(NAME)

LIB:
	make -C lib/my

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -L lib/my -lmy -lm -o $(NAME)

tests_run:	all
	gcc -o test tests/test_architect.c src/help_flag.c 	\
	src/manag_matrix.c src/transfo_matrix.c src/calcul_matrix.c	\
	-L lib/my -lmy -lm -I./include -lcriterion --coverage
	./test
	rm test

clean:
	make clean -C lib/my
	rm -f *.gcno
	rm -f *.gcda
	rm -f $(OBJ)
	@rm -f .#*
	@rm -f *~

fclean: clean
	make fclean -C lib/my
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
