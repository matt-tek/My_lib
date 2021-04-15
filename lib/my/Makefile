##
## EPITECH PROJECT, 2020
## mmathieu
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)
	cp $(NAME) ../

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
