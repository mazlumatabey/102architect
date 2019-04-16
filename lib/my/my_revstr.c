/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** .
*/

#include "my.h"

int str_size_a(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_revstr(char *str)
{
    int j = str_size_a(str) - 1;
    int i;
    char a;

    for (i = 0; i < j; i++, j--) {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }
    str[i + j + 1] = '\0';
    return (str);
}
