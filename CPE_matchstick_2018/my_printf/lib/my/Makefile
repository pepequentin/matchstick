##
## EPITECH PROJECT, 2018
## my makefile
## File description:
## task01
##

SRC = *.c

NAME = libmy.a

all: $(NAME)

$(NAME):
	gcc -c *.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME)

re:fclean all
