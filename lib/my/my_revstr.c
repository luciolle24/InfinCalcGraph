/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** Write a function that reverses
** a given string.
*/

char *my_revstr(char *str);
int my_strlen(char *str);

char *my_revstr(char *str)
{
    char tmp;
    int it = 0;
    int str_len = my_strlen(str);

    while (it != str_len / 2) {
        tmp = str[it];
        str[it] = str[str_len - it - 1];
        str[str_len - it - 1] = tmp;
        it ++;
    }
    return (str);
}
