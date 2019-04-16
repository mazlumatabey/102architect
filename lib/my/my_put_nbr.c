/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** .
*/

#include <unistd.h>
#include "my.h"

int my_put_nbr(int nb)
{
    int res = 0;

    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
    }
    res = nb % 10 + '0';
    write(1, &res, 1);
    return (0);
}
