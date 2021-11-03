/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** a function that turns the string into lowercase
*/

char *my_strlowcase(char *str);

char *my_strlowcase(char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] >= 'A' && str[counter] <= 'Z') {
            str[counter] = str[counter] - ('A' - 'a');
        }
        counter++;
    }
    return (str);
}
