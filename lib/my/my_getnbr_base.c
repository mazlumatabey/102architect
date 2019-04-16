/*
** EPITECH PROJECT, 2018
** my_getnbr_base
** File description:
** .
*/

#include "my.h"

int str_size_c(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

int my_getnbr_base(char const *str, char const *base)
{
    int res = 0;
    int i = 0;
    int j = 0;
    int neg = 1;
    int base_size = str_size_c(base);

    for (j = 0; str[j] == '-' || str[j] == '+'; j++, i++)
        if (str[j] == '-')
            neg = neg * (-1);
    for (j = 0; str[i] != '\0'; i++) {
        for (; str[i] != base[j]; j++)
            base[j] == '\0' ? j = 0 : 0;
        res = res * base_size + j;
    }
    return (res * neg);
}
