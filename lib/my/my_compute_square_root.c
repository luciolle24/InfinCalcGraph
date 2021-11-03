/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** iterative function that returns a
** the result of a square root.
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int loop = 1;
    int test = 0;

    while (loop <= nb) {
        test = my_compute_power_rec(loop, 2);
        if (test == nb) {
            return (loop);
        }
        loop++;
    }
    return (0);
}
