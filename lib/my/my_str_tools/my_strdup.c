/*
** EPITECH PROJECT, 2022
** my_ElemProj_C
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);

static char *my_strcpydup(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    dest = my_strcpydup(dest, src);
    return dest;
}
