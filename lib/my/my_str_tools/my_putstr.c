/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday04-thomas.decaudain
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
