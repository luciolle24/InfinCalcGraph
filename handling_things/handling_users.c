/*
** EPITECH PROJECT, 2021
** bistromatic bonus
** File description:
** handling_users
*/

#include "my.h"
#include <stdlib.h>

void secret_logo(void);
void bad_base(void);
void bad_ops(void);
void press_enter(void);
void clear_screen(int use_case);
int check_if_correct(char to_check, char *base);
void testing_base(char *base, char *operators);
void work_in_progress(void);
void testing_operators(char *operators);
char *getting_str_from_user(char *operators, char *base);
char *return_converted_ops(char *operators, char *str);
void getting_ready_for_parsing(char *operators, char *base);
char *return_converted_ops(char *operators, char *str);
void error_logo(void);
void no_calc(void);
void testing_for_easter_eggs(char *base);
void check_if_calc_uses_correct_base(char *base, char *operators, char *calc);


void handling_user(char *operators, char *base)
{
    int counter = 0;
    int secret_counter = 7;

    clear_screen(1);
    my_putstr("   Your base is ");
    my_putstr("\e[1m");
    my_putstr(base);
    my_putstr("\n \e[0m     And these operators : ");
    my_putstr(operators);
    my_putstr("\n Is that correct ? (doesn't matter if it's not");
    my_putstr(" 'cause I've not coded a way to change them yet\n");
    testing_for_easter_eggs(base);
    testing_base(base, operators);
    getting_ready_for_parsing(operators, base);
}

void testing_base(char *base, char *operators)
{
    int counter = 0;
    int i_counter = 0;
    int is_found = 0;

    while(base[counter] != '\0') {
       is_found = check_if_correct(base[counter], base);
        if (is_found > 1) {
            bad_base();
            error_logo();
            exit(84);
        }
       counter++;
    }
    testing_operators(operators);
}

int check_if_correct(char to_check, char *base)
{
    int counter = 0;
    int found = 0;

    while(base[counter] != '\0') {
        if (base[counter] == to_check)
            found++;
        counter++;
    }
    return (found);
}

void testing_operators(char *operators)
{
    int counter = 0;
    int i_counter = 0;
    int is_found = 0;

    while(operators[counter] != '\0') {
       is_found = check_if_correct(operators[counter], operators);
        if (is_found > 1) {
            bad_ops();
            error_logo();
            exit(84);
        }
        counter++;
    }
}

void getting_ready_for_parsing(char *operators, char *base)
{
    char *calc =  getting_str_from_user(operators, base);
    if (my_strlen(calc) - 1 <= 0) {
        no_calc();
        error_logo();
        exit(84);
    }
    my_putstr("This is what you want us to calculate ? \n");
    my_putstr(calc);
    check_if_calc_uses_correct_base(base, operators, calc);
    calc = return_converted_ops(operators, calc);
    my_putstr("We converted your stuff into normal stuff : \n");
    my_putstr(calc);
    press_enter();
    my_putstr("That's way to complicated for us... Try using this\n");
    my_putstr("https://www.lumni.fr/jeu/calculator\n");
    work_in_progress();
}