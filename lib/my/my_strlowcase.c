/*
** EPITECH PROJECT, 2018
** my_strlowcase
** File description:
** .
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i;

    for (i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return (str);

}
