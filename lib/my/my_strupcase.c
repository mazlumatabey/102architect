/*
** EPITECH PROJECT, 2018
** my_strupcase
** File description:
** .
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (str);
}
