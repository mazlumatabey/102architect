/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Thomas LIHOREAU
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    if (str != NULL) {
        write(1, str, my_strlen(str));
        /*while (str[i] != '\0') {
            write(1, &str[i], 1);
            i++;
            }*/
    }
    return (0);
}
