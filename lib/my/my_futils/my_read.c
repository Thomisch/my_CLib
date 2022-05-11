/*
** EPITECH PROJECT, 2022
** minishell2
** File description:
** my_read
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *my_strdup(char const *src);

char *my_fread(const char *filename)
{
    ssize_t nb_read = 0;
    char buffer[32000];
    int fd = -1;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (NULL);
    nb_read = read(fd, buffer, 32000);
    buffer[nb_read] = '\0';
    close(fd);
    return (my_strdup(buffer));
}
