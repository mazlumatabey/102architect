/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** .
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] && s2[i] && i < n; i++);
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
        return (0);
    else
        return (s1[i] - s2[i]);
}
