/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday07-thomas.decaudain
** File description:
** my_lib.h
*/

#ifndef _MY_H_
    #define _MY_H_



#endif /*_MY_H_*/

/*
** EPITECH PROJECT, 2022
** my_ElemProj_C
** File description:
** my_dprintf
*/

#ifndef MY_DPRINTF_H_
#define MY_DPRINTF_H_

void my_dprintf(int fd, char const *str, ...);

#endif /* !MY_DPRINTF_H_ */

/*
** EPITECH PROJECT, 2022
** my_ElemProj_C
** File description:
** my_int_tools
*/

#ifndef MY_INT_TOOLS_H_
#define MY_INT_TOOLS_H_

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_sort_int_array(int *array, int size);
void my_swap(int *a, int *b);
int myro_getnbr(char *str);

#endif /* !MY_INT_TOOLS_H_ */

/*
** EPITECH PROJECT, 2022
** my_ElemProj_C
** File description:
** str_tools
*/

#ifndef STR_TOOLS_H_
#define STR_TOOLS_H_

void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest ,char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase (char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const*s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);

#endif /* !STR_TOOLS_H_ */

/*
** EPITECH PROJECT, 2022
** my_ElemProj_C
** File description:
** my_futils
*/

#ifndef MY_FUTILS_H_
#define MY_FUTILS_H_

#define BUFF_SZ 32000

typedef struct file_s {
    char *buffer;
} file_t;

char *my_fread(const char *filename);
char *my_get_file_wtstat(char *file);

#endif /* !MY_FUTILS_H_ */
