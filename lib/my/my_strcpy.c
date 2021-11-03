/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** Write a function that copies a string into another.
*/

char *my_strcpy(char *dest, char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int it = 0;

    while (src[it] != '\0') {
        dest[it] = src[it];
        it++;
    }
    dest[it] = '\0';
    return (dest);
}
