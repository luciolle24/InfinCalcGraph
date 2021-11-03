/*
** EPITECH PROJECT, 2021
** bistro bonus
** File description:
** getting_calc
*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char *getting_str_from_user(char *operators, char *base)
{
    char *calc;
    size_t bufsize = 320000;
    size_t characters;

    calc = (char *)malloc(bufsize * sizeof(char));
    my_putstr("\e[0m   Please enter your operations :\n");
    characters = getline(&calc, &bufsize, stdin);
    return (calc);
}
