/*
** EPITECH PROJECT, 2022
** my_dprintf
** File description:
** my_dprintf_utils2
*/

int my_compute_power_rec(int nb, int p)
{
    if (p != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
    else
        return 1;
}

char *my_revstr(char *str)
{
    int i = 0;
    int c = 0;
    int tempvar = 0;

    while (str[c] != '\0')
        c = c + 1;
    c = c - 1;
    while (i < c) {
        tempvar = str[i];
        str[i] = str[c];
        str[c] = tempvar;
        i = i + 1;
        c = c - 1;
    }
    return (str);
}