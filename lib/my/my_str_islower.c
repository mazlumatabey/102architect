/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** .
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}
