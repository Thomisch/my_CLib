/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** my_lib
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char *my_get_file(char *file)
{
    struct stat statbuf;
    int fd = open(file, O_RDONLY);
    int sd = 0;
    int rd = 0;
    char *buffer = NULL;

    if (fd < 0)
        return NULL;
    sd = stat(file, &statbuf);
    if (sd < 0)
        return NULL;
    buffer = malloc(sizeof(char) * (statbuf.st_size + 1));
    rd = read(fd, buffer, statbuf.st_size);
    if (rd < 0)
        return NULL;
    if (buffer == NULL)
        return NULL;
    buffer[statbuf.st_size] = '\0';
    close(fd);
    return (buffer);
}
