/*
** EPITECH PROJECT, 2021
** bonus bistro
** File description:
** checking_if_correct_calc
*/

#include "my.h"
#include <stdlib.h>

void wrong_base(void);
void error_logo(void);
int check_if_in_base(char c, char *base, char *operators);

void check_if_calc_uses_correct_base(char *base, char *operators, char *calc)
{
    int counter = 0;

    while (calc[counter] != '\0') {
        if (check_if_in_base(calc[counter], base, operators) == 0) {
            wrong_base();
            error_logo();
            exit(84);
        }
        counter++;
    }
}

int check_if_in_base(char c, char *base, char *operators)
{
    int counter = 0;
    int found = 0;

    while (base[counter] != '\0') {
        if (c == base[counter]) {
            found = 1;
        }
        counter++;
    }
    counter = 0;
    while (operators[counter] != '\0') {
        if (c == operators[counter]) {
            found = 1;
        }
        counter++;
    }
    return (found);
}
