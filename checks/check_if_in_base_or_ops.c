/*
** EPITECH PROJECT, 2021
** bistro
** File description:
** check_if_in_base_or_ops
*/

#include "my.h"

int check(char c, char *base);

int check_if_in_both(char *base, char *ops)
{
    int base_len = my_strlen(base);
    int ops_len = my_strlen(ops);
    int max_len = 0;
    int counter = 0;
    int status = 0;

    if(base_len < ops_len) {
        max_len = ops_len;
    } else {
        max_len = base_len;
    }
    while (counter < max_len) {
        status = check(ops[counter], base);
        counter++;
        if (status == 84){
            return (84);
        }
    }
    return (0);
}

int check(char c, char *base)
{
     int counter =0;

    while (base[counter] != '\0') {
        if (c == base[counter])
            return(84);
    }
    return (0);
}
