/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** .
*/

#include "my.h"

static int my_modulo(int nb, long int *i)
{
    int tmp = *i;

    while (tmp * tmp <= nb) {
        if (nb % tmp == 0)
            return (0);
        tmp += 2;
    }
    *i = tmp;
}

int my_is_prime(int nb)
{
    long int i;

    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    else if (nb % 2 == 0)
        return (0);
    else {
        i = 3;
        my_modulo(nb, &i);
    }
    return (1);
}
