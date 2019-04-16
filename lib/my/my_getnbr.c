/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** .
*/

#include "my.h"

int my_getnbr(char const *str)
{
    long int nb = 0;
    long int isneg = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg *= -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else
            return (nb * isneg);
    }
    if ((nb * isneg) < 2147483648 && (nb * isneg) > -2147483648)
        return (nb * isneg);
    return (0);
}
