/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** .
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    if (i == 1)
        return (0);
    return (1);
}
