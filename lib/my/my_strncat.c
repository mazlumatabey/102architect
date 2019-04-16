/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** .
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    char dest_len = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return (dest);
}
