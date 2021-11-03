/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** Write a function that copies a certain number of chars in a
** string into another.
*/

char *my_strncpy(char *dest, char const *src, int n);
int my_strlen_const(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int it = 0;

    while (it != n && src[it] != '\0') {
        dest[it] = src[it];
        it++;
    }
    if (n > my_strlen_const(src)) {
        dest[it] = '\0';
    }
    return (dest);
}
