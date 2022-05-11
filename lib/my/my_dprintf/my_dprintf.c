/*
** EPITECH PROJECT, 2022
** my_dprintf
** File description:
** only basic flags[idsc%uoh] man 
*/

#include <stdarg.h>
#include <stdbool.h>

void my_dputchar(int fd, char const c);
void pour_i(int fd, va_list list);
void pour_s(int fd, va_list list);
void pour_c(int fd, va_list list);
void pour_pour(int fd, va_list list);
void pour_o(int fd, va_list list);
void pour_h(int fd, va_list list);
void pour_p(int fd, va_list list);

void man_simpl_flag(int fd, va_list list, char const *str, int cnt)
{
    int i;
    char f[8] = "idsc%uoh";
    void (*simpl_flags_printer[8])(int fd, va_list list) = {
        pour_i, pour_i, pour_s, pour_c,
        pour_pour, pour_i, pour_o, pour_h,
    };

    for (i = 0; f[i] != str[cnt]; i++);
    simpl_flags_printer[i](fd, list);
    return;
}

void my_dprintf(int fd, char const *str, ...)
{
    int x;
    va_list list;

    va_start(list, str);
    for (x = 0; str[x]; x++) {
        if (str[x] == '%') {
            x++;
            man_simpl_flag(fd, list, str, x);
        } else {
            my_dputchar(fd, str[x]);
        }
    }
    va_end(list);
    return;
}