/*
** EPITECH PROJECT, 2018
** my_putnbr_base
** File description:
** .
*/

#include <unistd.h>
#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int i;
    int j;

    i = my_strlen(base);
    if (nbr < 0) {
        nbr = nbr * (-1);
        write(1, "-", 1);
    }
    if (nbr == 0)
        return (0);
    else
        my_putnbr_base(nbr / i, base);
    //write(1, &base[nbr % i], 1);
    //printf("%d\n", j++);
    return (base[nbr % i] - '0');
}
