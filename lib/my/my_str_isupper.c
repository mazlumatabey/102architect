/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** .
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
    }
    if (i == 1)
        return (0);
    return (1);
}
