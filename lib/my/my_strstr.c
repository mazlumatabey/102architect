/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** .
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int c;

    for (i = 0; str[i] != '\0'; i++) {
        for (c = 0; str[c + i] == to_find[c]; c++) {
            if (to_find[c + 1] == '\0')
                return (&str[i]);
        }
    }
}
