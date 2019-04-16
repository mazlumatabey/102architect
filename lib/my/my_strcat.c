/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** .
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char dest_len = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
