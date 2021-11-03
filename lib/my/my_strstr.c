/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** function finds the first occurrence of the
** substring needle in the string haystack
*/

#include <stddef.h>
#include <stdio.h>

char *my_strstr(char *str, char const *to_find);
static int check_if_same(int first_adress, char const *str, char const *to_fd);
int my_strlen_const(char const *str);

static int check_if_same(int first_adress, char const *str, char const *to_fd)
{
    int counter = first_adress;
    int to_find_counter = 0;
    int similar_len = 0;
    int to_find_len = my_strlen_const(to_fd);

    while (to_find_counter <= to_find_len) {
        if (str[counter] == to_fd[to_find_counter]) {
            similar_len++;
        }
        to_find_counter++;
        counter++;
    }
    if (similar_len == to_find_len) {
        return (first_adress);
    } else {
        return (-1);
    }
}

char *my_strstr(char *str, char const *to_find)
{
    return (0);
}
