/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** .
*/

#include "my.h"

int str_size_b(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > str_size_b(src))
        dest[i] = '\0';
    return (dest);
}
