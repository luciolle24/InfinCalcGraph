/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** a function that displays the number given as a parameter.
*/

int my_put_nbr(int nb);
static int my_put_nbr_in_long(long nb);
int my_putchar(char c);
static int handling_negatives(int nb);

static int handling_negatives(int nb)
{
    if (nb == 0) {
        my_putchar('0');
    }
    my_putchar('-');
    my_put_nbr_in_long(-nb);
    return (0);
}

static int my_put_nbr_in_long(long nb)
{
    long result = nb;
    long multiplier = 1;

    if (nb <= 0) {
        handling_negatives(nb);
    }
    while (result > 10) {
        result = nb / 10;
        multiplier = multiplier * 10;
    }
    nb = nb - result * multiplier;
    if (result != 0 || multiplier != 1) {
        my_putchar(result + '0');
    }
    if (result == 0) {
        return (0);
    } else {
        my_put_nbr(nb % 10);
    }
    return (0);
}

int my_put_nbr(int nb)
{
    my_put_nbr_in_long(nb);
    return (0);
}
