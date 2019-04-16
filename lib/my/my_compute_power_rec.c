/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** .
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    nb = nb * my_compute_power_rec(nb, p - 1);
    if (nb < 2147483648)
        return (nb);
    else
        return (0);
}
