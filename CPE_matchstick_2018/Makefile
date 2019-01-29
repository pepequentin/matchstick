##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

NAME	=	matchstick

SRC	=	./src/main.c\
		./src/map.c\
		./src/stick.c\
		./src/trash.c\
		./src/ai.c\
		./src/print.c\

INCLUDE	=	-Wall -Wextra -g3 -I ./include/

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./my_printf
	@gcc -o $(NAME) $(OBJ) -C libmy.a $(INCLUDE)
	@rm -f $(OBJ)

clean:
	@rm -f $(OBJ)
	@make clean -C ./my_printf

fclean:	clean
	@make fclean -C ./my_printf
	@rm -f $(NAME)

re: fclean all
