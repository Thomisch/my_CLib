##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-thomas.decaudain
## File description:
## Makefile for libmy
##

SRC	=	my_dprintf/my_dprintf_flags1.c \
		my_dprintf/my_dprintf_flags2.c \
		my_dprintf/my_dprintf_utils1.c \
		my_dprintf/my_dprintf_utils2.c \
		my_dprintf/my_dprintf.c \
		my_int_tools/my_find_prime_sup.c \
		my_int_tools/my_isneg.c \
		my_int_tools/myro_getnbr.c \
		my_int_tools/my_compute_power_rec.c \
		my_int_tools/my_getnbr.c \
		my_int_tools/my_is_prime.c \
		my_int_tools/my_sort_int_array.c \
		my_int_tools/my_compute_square_root.c \
		my_int_tools/my_put_nbr.c\
		my_int_tools/my_swap.c \
		my_str_tools/my_itoa.c \
		my_str_tools/my_putchar.c \
		my_str_tools/my_putstr.c \
		my_str_tools/my_revstr.c \
		my_str_tools/my_str_isalpha.c \
		my_str_tools/my_str_islower.c \
		my_str_tools/my_str_isnum.c \
		my_str_tools/my_str_isprintable.c \
		my_str_tools/my_str_isupper.c \
		my_str_tools/my_str_to_word_array.c \
		my_str_tools/my_strcapitalize.c \
		my_str_tools/my_strcat.c \
		my_str_tools/my_strcmp.c \
		my_str_tools/my_strcpy.c \
		my_str_tools/my_strlen.c \
		my_str_tools/my_strlowcase.c \
		my_str_tools/my_strncat.c \
		my_str_tools/my_strncmp.c \
		my_str_tools/my_strstr.c \
		my_str_tools/my_strupcase.c \
		my_stat_read_file.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
