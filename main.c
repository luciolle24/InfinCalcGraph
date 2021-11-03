/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "my.h"

void welcome_message(void);
void welcome_message2(void);
void welcome_message3(void);
void reading_from_input(void);
void print_logo(void);
void studio_logo(void);
void clear_screen(int use_case);

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;
    clear_screen(0);
    welcome_message();
}

void welcome_message(void)
{
    my_putstr("\e[5m");
    print_logo();
    studio_logo();
    welcome_message2();
}

void welcome_message2(void)
{
    my_putstr("\e[36m        \e[4mUSAGE\n\n");
    my_putstr("\e[0m");
    my_putstr("\e[33m   ./calc base operators size_read\n\n");
    my_putstr("\e[36m        \e[4mDESCRIPTION\n\n");
    my_putstr("\e[0m");
    my_putstr("\e[33m    - base: all the symbols of the base\n");
    my_putstr("\e[33m    - operators: the symbols for the parentheses and the 5 operators\n");
    my_putstr("\e[33m    - size_read: number of characters to be read\n");
    my_putstr("\e[36m        \e[4mABOUT US\n\n");
    my_putstr("\e[0m");
    my_putstr("\e[33m   We are a group of friends with a dream to become \n");
    my_putstr("\e[33m   the best Pokemon trainers / ninjas in the entire \n");
    my_putstr("\e[33m   known universe\n");
    my_putstr("\e[33m   If you are seeing this message\n");
    my_putstr("\e[33m   it means that miraculously this code works\n");
    my_putstr("\e[33m   it also means you are looking for the coveted\n");
    my_putstr("\e[33m   graphical version of this program... \n\n");
    my_putstr("\e[31m   IT SADLY DOESN'T EXIST YET \n");
    my_putstr("\e[33m   BUUUUUUTTTTTTTT, this is an attempt at making it work\n");
    reading_from_input();
}
