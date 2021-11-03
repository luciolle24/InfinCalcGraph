/*
** EPITECH PROJECT, 2021
** bistromatic bonus
** File description:
** error_handling
*/
#include "my.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void invalid_base_logo(void);
void invalid_ops_logo(void);
void press_enter(void);
void clear_screen(int use_case);
void wrong_base_logo(void);
void wrong_base_logo(void);

void bad_base(void)
{
    my_putstr("You've used an invalid base \n");
    invalid_base_logo();
    press_enter();
}

void bad_ops(void)
{
    my_putstr("You've used invalid operators \n");
    invalid_ops_logo();
    press_enter();
}

void wrong_base(void)
{
    my_putstr("You've used a character that wasn't a part of your base");
    my_putstr("or your operators...");
    wrong_base_logo();
    press_enter();
}

void press_enter(void)
{
    size_t characters = 0;
    size_t bufsize = 320000;
    char *ready;

    my_putstr("   Please press enter to continue \n");
    characters = read(0, &ready, bufsize);
    if (characters != 1) {
        my_putstr("   Error reading your input\n");
        press_enter();
    }
    clear_screen(1);
}