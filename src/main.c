/*
** EPITECH PROJECT, 2022
** MyElemProj
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>
#include "my_elemproj.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    file_t f;
    f.buffer = my_fread("src/main.c");
    my_dprintf(1,"%s", f.buffer);
    return (0);
}
