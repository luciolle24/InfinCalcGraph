/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** a function that checks if a string only contains
** digits.
*/

int my_str_isnum(char const *str);

int my_str_isnum(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (!(str[counter] >= '0' && str[counter] <= '9')) {
            return (0);
        }
        counter++;
    }
    return (1);
}
