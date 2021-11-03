/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** a function that displays, one-by-one, the characters of a string.
*/

int my_putstr(char const *str);
char my_putchar(char c);

int my_putstr(char const *str)
{
    int content = 0;

    while (str[content] != '\0') {
        my_putchar(str[content]);
        content++;
    }
    return (0);
}
