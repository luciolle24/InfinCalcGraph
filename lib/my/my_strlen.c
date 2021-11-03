/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** a function that counts and returns the number of
** characters found in the string passed as parameter.
*/

int my_strlen_const(char const *str);
int my_strlen(char *str);

int my_strlen(char *str)
{
    int content = 0;

    while (str[content] != '\0') {
        content++;
    }
    return (content);
}

int my_strlen_const(char const *str)
{
    int content = 0;

    while (str[content] != '\0') {
        content++;
    }
    return (content);
}
