/*
** EPITECH PROJECT, 2022
** my_dprintf
** File description:
** my_dprintf_utils
*/

#include <stdarg.h>

void my_dputchar(int fd, char const c);
void my_dputstr(int fd, char const *str);
void my_dputnbr(int fd, int nb);

void pour_i(int fd, va_list list)
{
    my_dputnbr(fd, va_arg(list, int));
}

void pour_s(int fd, va_list list)
{
    my_dputstr(fd, va_arg(list, char *));
}

void pour_c(int fd, va_list list)
{
    my_dputchar(fd, va_arg(list, int));
}

void pour_pour(int fd, va_list list)
{
    my_dputchar(fd, '%');
}
