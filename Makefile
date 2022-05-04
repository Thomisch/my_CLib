##
## EPITECH PROJECT, 2022
## MyElemProj
## File description:
## Makefile
##

SRC	=	src/*.c

NAME =	binary_name

FLAGS = -Wall -Wextra -I include -Llib/my/ -lmy

all:	$(NAME)

$(NAME):
	$(MAKE) -s -C lib/my/
		gcc -o $(NAME) $(SRC) $(FLAGS)

clean:
	$(MAKE) -s -C lib/my/ clean

fclean:	clean
	$(MAKE) -s -C lib/my/ fclean
		rm -f $(NAME)

re: 		fclean all