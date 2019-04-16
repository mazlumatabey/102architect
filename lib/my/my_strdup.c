/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** .
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int c = 0;
    char *string;

    string = malloc(sizeof(char) * (my_strlen(src) + 2));
    while (src[c]) {
        string[c] = src[c];
        c++;
    }
    string[c] = '\0';
    return (string);
}
