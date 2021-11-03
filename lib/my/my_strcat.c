/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** a function that returns a str
** concated to a dest string
*/

char *my_strcat(char *dest, char const *src);

char *my_strcat(char *dest, char const *src)
{
    int counter = 0;
    int src_counter = 0;

    while (dest[counter] != '\0') {
        counter++;
    }
    while (src[src_counter] != '\0') {
        dest[counter] = src[src_counter];
        counter++;
        src_counter++;
    }
    dest[counter] = '\0';
    return (dest);
}
