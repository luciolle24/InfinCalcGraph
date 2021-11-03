/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** recursive function that returns a
** the result of a number to the power of x.
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int loop = nb;
    while (loop < 2147483647) {
        if (my_is_prime(loop) == 1) {
            return (loop);
        }
        loop++;
    }
    return (0);
}
