/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** .
*/

#include "my.h"

void last_cond(char *str, int *i)
{
    if (str[*i] >= 'a' && str[*i] <= 'z')
        if (str[*i - 1] >= '\0' && str[*i - 1] <= '/')
            str[*i] = str[*i] + ('A' - 'a');
}

char *my_strcapitalize(char *str)
{
    int	i;

    for (i = 1; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - ('A' - 'a');
    for (i = 1; str[i] != '\0'; i++) {
        last_cond(str, &i);
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A' - 'a');
    return (str);
}
