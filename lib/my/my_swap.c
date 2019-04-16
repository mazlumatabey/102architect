/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** .
*/

#include "my.h"

void my_swap(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
