##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

NAME	=	../libmy.a

SRC	=	my_printf.c\
		stock_part1.c\
		./lib/my/my_octal.c\
		stock_part2.c\
		./lib/my/my_getnbr.c\
		./lib/my/my_putchar.c\
		./lib/my/my_put_nbr_base.c\
		./lib/my/my_put_nbr.c\
		./lib/my/my_putstr.c\
		./lib/my/my_put_unsignednbr.c\
		./lib/my/my_revstr.c\
		./lib/my/my_strlen.c\
		./lib/my/my_pointer.c\

INCLUDE	=	-I ./include/

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I ./include/

all: $(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: fclean all
