/*
** EPITECH PROJECT, 2021
** bistromatic_bonus
** File description:
** reading_from_input
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void work_in_progress(void);
int get_operators(char *operators);
void start_calc(void);
void print_logo(void);
void clear_screen(int use_case);
void handling_user(char *operators, char *base);
void press_enter(void);

void reading_from_input(void)
{
    char *base;
    char *operators;
    size_t bufsize = 320000;
    size_t characters;
    char **argv;
    char *user_name = getenv("USER");

    base = (char *)malloc(bufsize * sizeof(char));
    operators = (char *)malloc(bufsize * sizeof(char));
    start_calc();
    my_putstr("\e[0m   Enter your base, ");
    my_putstr(user_name);
    my_putstr(" :\n");
    characters = getline(&base, &bufsize, stdin);
    press_enter();
    if (my_strlen(base) - 1 <= 0)
        base = "CHAT";
    get_operators(operators);
    if (my_strlen(operators) != 8)
        operators = "()+-*/%";
    handling_user(operators, base);
}

int get_operators(char *operators)
{
    size_t characters = 0;
    size_t bufsize = 320000;

    my_putstr("Enter your operators '()+-*/\%'\n");
    characters = getline(&operators, &bufsize, stdin);
    press_enter();
    return (characters);
}

void start_calc(void)
{
    size_t characters = 0;
    size_t bufsize = 320000;
    char *ready;

    my_putstr("   Please press enter to start the graphical calculator \n");
    characters = read(0, &ready, bufsize);
    if (characters != 1) {
        my_putstr("   Error readind your input\n");
        start_calc();
    }
    clear_screen(1);
}
