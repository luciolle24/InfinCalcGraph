/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** a function that checks if a string only contains
** lowercase chars.
*/

int my_str_isupper(char const *str);

int my_str_isupper(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (!(str[counter] >= 'A' && str[counter] <= 'Z')) {
            return (0);
        }
        counter++;
    }
    return (1);
}
