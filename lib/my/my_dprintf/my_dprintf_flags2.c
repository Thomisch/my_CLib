/*
** EPITECH PROJECT, 2022
** my_dprintf
** File description:
** my_dprintf_flags2
*/

#include <stdarg.h>
#include <stdlib.h>

void my_dputstr(int fd, char const *str);
char *my_revstr(char *str);
int my_compute_power_rec(int nb, int p);

static char *int_to_oct(long int nb)
{
    int long i = 0;
    int long k = 0;
    int long temp;
    for(; nb > my_compute_power_rec(16, i) &&
        nb < my_compute_power_rec(16, i + 1); k++);
    char *result = malloc(sizeof(char) * k + 1);

    for(;nb != 0; i++) {
        temp = nb % 8;
        if (temp < 10)
            temp = temp + 48;
        result[i] = temp;
        nb = nb / 8;
    }
    my_revstr(result);
    result[i] = '\0';
    return(result);
}

static char *long_to_hex(long int nb)
{
    int long i = 0;
    int long k = 0;
    int long temp;
    for(; nb > my_compute_power_rec(16, i) &&
        nb < my_compute_power_rec(16, i + 1); k++);
    char *result = malloc(sizeof(char) * k + 1);

    for(; nb != 0; i++) {
        temp = nb % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 87;
        result[i] = temp;
        nb = nb / 16;
    }
    my_revstr(result);
    result[i] = '\0';
    return(result);
}

void pour_o(int fd, va_list list)
{
    my_dputstr(fd, int_to_oct(va_arg(list, long)));
}

void pour_h(int fd, va_list list)
{
    my_dputstr(fd, long_to_hex(va_arg(list, long)));
}

void pour_p(int fd, va_list list)
{
    my_dputstr(fd, "0x");
    my_dputstr(fd, long_to_hex(va_arg(list, long)));
}
