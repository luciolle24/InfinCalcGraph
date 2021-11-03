/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** a function that turns the string into uppercase
*/

char *my_strupcase(char *str);

char *my_strupcase(char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] >= 'a' && str[counter] <= 'z') {
            str[counter] = str[counter] + ('A' - 'a');
        }
        counter++;
    }
    return (str);
}
