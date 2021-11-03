/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** Write a function that displays either N
** if the integer passed as parameter is
** negative or P, if positive or null
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar(80);
    } else {
        my_putchar(78);
    }
    return (0);
}
