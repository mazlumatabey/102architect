/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** Thomas LIHOREAU
*/

#include <stdlib.h>
#include "my.h"

static int is_alpha(char c)
{
    if (c != ' ')
        return (1);
    return (0);
}

static int words_counter(char const *str)
{
    int	word = 0;
    int	i = 0;
    int	n = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (word == 0 && is_alpha(str[i]) == 1) {
            word = 1;
            n++;
        }
        if (word == 1 && is_alpha(str[i]) == 0)
            word = 0;
    }
    return (n);
}

static void char_dup(char *dest, char const *src, int begin, int end)
{
    int	i = 0;

    for (i = 0; begin <= end; i++, begin++)
        dest[i] = src[begin];
    dest[i] = '\0';
}

static void words_saver(char **tab, char const *str, int n)
{
    int	i = 0;
    int	begin = 0;
    int	c = 0;

    for (; c < n; i++, c++) {
        for (; str[i] && is_alpha(str[i]) == 0; i++);
        begin = i;
        for (; str[i] && is_alpha(str[i]) == 1; i++);
        tab[c] = malloc(sizeof(char) * ((i - 1) - begin + 2));
        char_dup(tab[c], str, begin, i - 1);
    }
}

char **my_str_to_word_array(char const *str)
{
    int	n;
    char **tab;

    n = words_counter(str);
    tab = malloc(sizeof(char*) * (n + 1));
    words_saver(tab, str, n);
    tab[n] = NULL;
    return (tab);
}
