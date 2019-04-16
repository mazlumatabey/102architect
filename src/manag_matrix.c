/*
** EPITECH PROJECT, 2018
** manag_matrix
** File description:
** .
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_struct.h"
#include "my.h"

int is_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return (0);
    return (1);
}

float **create_the_matrix(float x, float y)
{
    int i;
    float **matrix = malloc(sizeof(float *) * (y + 1));

    for (i = 0; i < y; i++)
        matrix[i] = malloc(sizeof(float) * (x + 1));
    matrix[i] = NULL;
    for (i = 0; i < y; i++) {
        for (int j = 0; j < x; j++)
            matrix[i][j] = 0;
    }
    for (i = 0; i < y; i++)
        matrix[i][i] = 1;
    return (matrix);
}

int manag_error(a_t *a)
{
    if ((!strcmp(a->tab[a->i], "-t") || !strcmp(a->tab[a->i], "-z")) &&
        a->tab[a->i + 1] != NULL && a->tab[a->i + 2] != NULL &&
        is_num(a->tab[a->i + 1]) && is_num(a->tab[a->i + 2]))
        return (1);
    else if ((!strcmp(a->tab[a->i], "-r") ||
              !strcmp(a->tab[a->i], "-s")) &&
             a->tab[a->i + 1] != NULL && is_num(a->tab[a->i + 1]))
        return (1);
    else {
        fprintf(stderr, "Invalid flag arguments, must be numbers\n");
        fprintf(stderr, "-t and -z flags need 2 numbers\n");
        exit(84);
    }
    return (0);
}

void print_matrix_result(a_t *a)
{
    for (a->i = 2; a->tab[a->i] != NULL; a->i++) {
        if (!strcmp(a->tab[a->i], "-t") && manag_error(a))
            translation_matrix(a);
        if (!strcmp(a->tab[a->i], "-z") && manag_error(a))
            scaling_matrix(a);
        if (!strcmp(a->tab[a->i], "-r") && manag_error(a))
            rotate_matrix(a);
        if (!strcmp(a->tab[a->i], "-s") && manag_error(a))
            reflection_matrix(a);
    }
    for (int i = 0; a->matrix[i]; i++) {
        for (int j = 0; a->matrix[j]; j++)
            printf("%0.2f\t", a->matrix[i][j]);
        printf("\n");
    }
    for (int j = 0; j < 3; j++)
        a->return_tab[j] = (atof(a->tab[1]) * (a->matrix[j][0])) +
            (atof(a->tab[2]) * (a->matrix[j][1])) +
            (1 * (a->matrix[j][2]));
}

int architect(int ac, char **av)
{
    a_t *a;

    if (ac == 2 && !strcmp(av[1], "-h")) {
        help_flag();
        return (0);
    }
    if (ac <= 4 || !(!strcmp(av[3], "-t") || !strcmp(av[3], "-z") ||
                     !strcmp(av[3], "-r") || !strcmp(av[3], "-s"))) {
        fprintf(stderr, "Invalid arguments, too few arguments\n");
        exit(84);
    }
    a = malloc(sizeof(a_t));
    a->tab = av;
    a->matrix = create_the_matrix(3, 3);
    a->tmp_matrix = create_the_matrix(3, 3);
    a->return_tab = malloc(sizeof(float) * 3);
    print_matrix_result(a);
    printf("(%.0f, %.0f) => ", atof(a->tab[1]), atof(a->tab[2]));
    printf("(%.2f, %.2f)\n", a->return_tab[0], a->return_tab[1]);
    free_struct(a);
}
