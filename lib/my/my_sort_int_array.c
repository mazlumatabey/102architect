/*
** EPITECH PROJECT, 2018
** my_sort_in_array
** File description:
** .
*/

#include "my.h"

void my_swap_val(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void swap_if_needed(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap_val(nb1, nb2);
}

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            swap_if_needed(&array[j], &array[j + 1]);
        }
    }
}
