##
## EPITECH PROJECT, 2019
## my_makefile
## File description:
## makefile
##

SRC	=	$(shell find src/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

INCLUDE	=	-I/include/ -Wall

LIB	=	-lncurses

all: $(NAME)

$(NAME):	$(OBJ)
		gcc -o  $(NAME) $(OBJ) $(INCLUDE) $(LIB)

clean:
	rm -f $(OBJ)


fclean:	clean
	rm -f $(NAME)
	rm -f vgc*
	rm -f src/*~
	rm -f src/vgc*

re:	fclean all
