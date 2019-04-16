/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** .
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
    return (0);
}
