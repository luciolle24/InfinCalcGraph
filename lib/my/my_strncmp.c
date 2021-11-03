/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** a function compares the first n bytes of the two strings s1 and s2.
*/

int my_strncmp(char const *s1, char const *s2, int n);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int counter = 0;
    int s1_value = 0;
    int s2_value = 0;

    while (counter != n && s1[counter] != '\0') {
        s1_value = s1_value + s1[counter];
        counter++;
    }
    counter = 0;
    while (counter != n && s2[counter] != '\0') {
        s2_value = s2_value + s2[counter];
        counter++;
    }
    return (s1_value - s2_value);
}
