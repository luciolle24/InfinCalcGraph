/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** displays one letter when it's passed as an argument
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
