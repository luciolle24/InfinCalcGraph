/*
** EPITECH PROJECT, 2021
** bistro bonus
** File description:
** ops_parsing
*/

#include "my.h"
#include <stdio.h>

char *return_converted_ops2(char *operators, char *str);
char *return_converted_ops3(char *operators, char *str);

char *return_converted_ops(char *operators, char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] == operators[0])
            str[counter] = '(';
        if (str[counter] == operators[1])
            str[counter] = ')';
        if (str[counter] == operators[2])
            str[counter] = '+';
        counter++;
    }
    str = return_converted_ops2(operators, str);
    return (str);
}

char *return_converted_ops2(char *operators, char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] == operators[3])
            str[counter] = '-';
        if (str[counter] == operators[4])
            str[counter] = '*';
        if (str[counter] == operators[5])
            str[counter] = '/';
        counter++;
    }
    str = return_converted_ops3(operators, str);
    return (str);
}

char *return_converted_ops3(char *operators, char *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        if (str[counter] == operators[6])
            str[counter] = '%';
        counter++;
    }
    return (str);
}