/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-evalexpr-lucine.balas
** File description:
** eval
*/

#ifndef EVAL_H_
    #define EVAL_H_

int eval_expr(char const *str);
int is_bigger(char *nbr1, char *nbr2);
char *is_the_longuest(char *str1, char *str2);
char get_char_pos(int pos, char *str);
void init_char_array(char *array, char default_char, int len);
void init_int_array(int *array, int default_int, int len, int end_value);
void clear_first_zero(char *str);
char *sub(char *str1, char *str2);
// char *divise(char *divided, char *divider);
// int add(char *nbr1, char *nbr2);
// int remove(char *nbr1, char *nbr2);
// int multiply(char *nbr1, char *nbr2);
// int divise(char *nbr1, char *nbr2);
// int modulo(char *nbr1, char *nbr2);

#endif /* !EVAL_H_ */