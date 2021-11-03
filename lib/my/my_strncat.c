/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb);

char *my_strncat(char *dest, char const *src, int nb)
{
    int counter = 0;
    int src_counter = 0;

    while (dest[counter] != '\0') {
        counter++;
    }
    while (src_counter <= nb) {
        dest[counter] = src[src_counter];
        counter++;
        src_counter++;
    }
    dest[counter] = '\0';
    return (dest);
}
