/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** .
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i;

    for (i = 0; str[i]; i++) {
        if (str[i] < 20 || str[i] >= 127)
            return (0);
    }
    if (i == 1)
        return (0);
    return (1);
}
