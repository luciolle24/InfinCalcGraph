/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** a function that sorts an integer
** array in ascending order, given a
** pointer to the first element of the
** array and its size.
*/

void my_sort_int_array(int *array, int size);
static void initialize_array(int *array, int *result_array, int size);

static void initialize_array(int *array, int *result_array, int size)
{
    int loop;

    for (loop = 0; loop <= size; loop++) {
        array[loop] = result_array[loop];
    }
}

void my_sort_int_array(int *array, int size)
{
}
