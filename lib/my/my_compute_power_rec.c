/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** recursive function that returns a
** the result of a number to the power of x.
*/

static int return_power_rec(int nb, int p);

static int return_power_rec(int nb, int p)
{
    if (p != 1) {
        nb = return_power_rec(nb, p - 1) * nb;
    }
    return (nb);
}

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p < 0) {
        return (0);
    } else if (p == 0) {
        return (1);
    } else {
        result = return_power_rec(nb, p);
    }
    return (result);
}
