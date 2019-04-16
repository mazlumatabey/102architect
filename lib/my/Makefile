## 
## EPITECH PROJECT, 2017 
## Makefile
## File description:
## .
##

SRC=	$(wildcard *.c)

OBJ=	$(SRC:.c=.o)

MY=	$(wildcard *.h)

REPO_LIB= ../

REPO_INC= ../../include/

NAME=	libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	cp $(NAME) $(REPO_LIB)
	mkdir -p $(REPO_INC)
	cp $(MY) $(REPO_INC)
	@echo "╔───────────────────────────╗"
	@echo "|    Compiling:  $(NAME)    |"
	@echo "╚───────────────────────────╝"

clean:
	@rm -f $(OBJ)
	@rm -f .#*
	@rm -f *~
	@echo "[────] Cleaning files [─────]"

fclean:	clean
	@rm -f $(NAME)
	@rm -f $(REPO_LIB)$(NAME)
	@rm -rf $(REPO_INC)

re:	fclean all 

.PHONY: all clean fclean re 
