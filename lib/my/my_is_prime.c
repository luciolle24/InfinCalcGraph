/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** a function that returns a
** the smallest prime number greater than or equal
** to a given number.
*/

int my_is_prime(int nb);

int my_is_prime(int nb)
{
    int loop = 2;
    int result = 0;

    if (nb == 0 || nb == 1) {
        return (0);
    }
    while (loop < nb / 2) {
        result = nb % loop;
        if (result == 0) {
            return (0);
        }
        loop++;
    }
    return (1);
}
