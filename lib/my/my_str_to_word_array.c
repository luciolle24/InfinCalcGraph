/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>

static int get_number_of_words(char const *str);
static int is_an_char(char const *str, int place);
void **return_allocated_array(char **return_array, char const *str);
static char *return_word(char const *str, int word_size, int place);
static int get_word_len(const char *str, int counter);

static int is_an_char(char const *str, int place)
{
    if (str[place] >= 'a' && str[place] <= 'z') {
        return (1);
    }
    if (str[place] >= 'A' && str[place] <= 'Z') {
        return (1);
    }
    if (str[place] >= '0' && str[place] <= '9') {
        return (1);
    }
    return (0);
}

static int get_number_of_words(char const *str)
{
    int it = 1;
    int nbr_words = 0;

    if (is_an_char(str, 0) == 1)
        nbr_words = 1;
    while (str[it] != '\0') {
        if (is_an_char(str, it) == 1 && is_an_char(str, it - 1) == 0) {
            nbr_words++;
        }
        it++;
    }
    return (nbr_words);
}

char **my_str_to_word_array(char const *str)
{
    int nbr_words = get_number_of_words(str);
    char **return_array;
    int word_len = 0;
    int space_counter = 0;
    int count = 0;

    return_array = malloc(sizeof(char *) * nbr_words + 1);
    return_array[nbr_words] = 0;
    while (str[count] != '\0') {
        if (is_an_char(str, count) == 1 && is_an_char(str, count - 1) == 0) {
            word_len = get_word_len(str, count);
            return_array[space_counter] = malloc(sizeof(char) * word_len);
            return_array[space_counter] = return_word(str, word_len, count);
            space_counter++;
        }
        count++;
    }
    return (return_array);
}

static int get_word_len(const char *str, int counter)
{
    int word_size = 0;

    while (is_an_char(str, (counter + word_size)) == 1) {
        word_size++;
    }
    return (word_size);
}

static char *return_word(char const *str, int word_size, int place)
{
    char *result_array;
    int counter = 0;

    result_array = malloc(word_size);
    while (counter < word_size) {
        result_array[counter] = str[place + counter];
        counter++;
    }
    result_array[counter] = '\0';
    return (result_array);
}
