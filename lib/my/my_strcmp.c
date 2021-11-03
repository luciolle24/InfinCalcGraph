/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** a function compares the two strings s1 and s2.
*/

int my_strcmp(char const *s1, char const *s2);
int my_strlen_const(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int counter = 0;
    int s1_value = 0;
    int s2_value = 0;

    while (counter != my_strlen_const(s1)) {
        s1_value = s1_value + s1[counter];
        counter++;
    }
    counter = 0;
    while (counter != my_strlen_const(s2)) {
        s2_value = s2_value + s2[counter];
        counter++;
    }
    return (s1_value - s2_value);
}
