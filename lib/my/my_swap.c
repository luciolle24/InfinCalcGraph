/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** a function that swaps the content of two integers,
** whose addresses are given as a parameter
*/

void my_swap(int *a, int *b);
char my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
