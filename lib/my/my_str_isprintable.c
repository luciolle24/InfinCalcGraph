/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** a function that checks if a string only contains
** printable characters.
*/

int my_str_isprintable(char const *str);

int my_str_isprintable(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] <= 31 || str[counter] == 127) {
            return (0);
        }
        counter++;
    }
    return (1);
}
