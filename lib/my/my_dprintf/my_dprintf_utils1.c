/*
** EPITECH PROJECT, 2022
** my_dprintf
** File description:
** my_dutils
*/

#include <unistd.h>

static int my_intlen(int nb)
{
    int i;

    if (nb == 0)
        return 1;
    for (i = 1; nb != 0; i++)
        nb = nb / 10;
    return (i - 1);
}

static int power(int nb, int p)
{
    int t = 1;

    for (int h = 0; h < nb; ++h)
        t = t * p;
    return (t);
}

void my_dputchar(int fd, char const c)
{
    write(fd, &c, 1);
    return;
}

void my_dputnbr(int fd, int nb)
{
    int buf;

    if (nb < 0) {
        nb = nb * -1;
        my_dputchar(fd, '-');
    }
    for (int x = 1; x <= my_intlen(nb); x++) {
        buf = (nb / power(my_intlen(nb) - x, 10)) % 10;
        my_dputchar(fd, buf + '0');
    }
    return;
}

void my_dputstr(int fd, char const *str)
{
    for (int x = 0; str[x] != '\0'; x++)
        my_dputchar(fd, str[x]);
    return;
}
