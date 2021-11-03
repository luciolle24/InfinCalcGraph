/*
** EPITECH PROJECT, 2021
** my_show_word_array.c
** File description:
** my_show_word_array
*/

int my_show_word_array(char * const *tab);
void my_putchar(char c);
int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int counter = 0;

    while (tab[counter] != 0) {
        my_putstr(tab[counter]);
        my_putchar('\n');
        counter++;
    }
    return (0);
}
