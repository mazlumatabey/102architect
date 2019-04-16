/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** .
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int sqrt = 1;

    while (sqrt < nb / sqrt) {
        sqrt++;
    }
    if (sqrt * sqrt == nb)
        return (sqrt);
    else
        return (0);
}
