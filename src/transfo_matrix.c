/*
** EPITECH PROJECT, 2018
** architect_function
** File description:
** .
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_struct.h"
#include "my.h"

float *translation_matrix(a_t *a)
{
    a->x = atof(a->tab[a->i + 1]);
    a->y = atof(a->tab[a->i + 2]);
    a->tmp_matrix[0][2] = a->x;
    a->tmp_matrix[1][2] = a->y;
    printf("Translation along vector (%.0f, %.0f)\n", a->x, a->y);
    multiplie_matrix_first(a);
    free(a->tmp_matrix);
    a->tmp_matrix = create_the_matrix(3, 3);
}

float *scaling_matrix(a_t *a)
{
    a->x = atof(a->tab[a->i + 1]);
    a->y = atof(a->tab[a->i + 2]);
    a->tmp_matrix[0][0] = a->x;
    a->tmp_matrix[1][1] = a->y;
    printf("Scaling by factors %.0f and %.0f\n", a->x, a->y);
    multiplie_matrix_first(a);
    free(a->tmp_matrix);
    a->tmp_matrix = create_the_matrix(3, 3);
}

float *rotate_matrix(a_t *a)
{
    double val = M_PI / 180;

    a->tmp_matrix[0][0] = cos(atoi(a->tab[a->i + 1]) * val);
    a->tmp_matrix[0][1] = -sin(atoi(a->tab[a->i + 1]) * val);
    a->tmp_matrix[1][0] = sin(atoi(a->tab[a->i + 1]) * val);
    a->tmp_matrix[1][1] = cos(atoi(a->tab[a->i + 1]) * val);
    printf("Rotation by a %d degree angle\n", atoi(a->tab[a->i + 1]));
    multiplie_matrix_first(a);
    free(a->tmp_matrix);
    a->tmp_matrix = create_the_matrix(3, 3);
}

float *reflection_matrix(a_t *a)
{
    double val = M_PI / 180;

    a->tmp_matrix[0][0] = cos(2 * (atoi(a->tab[a->i + 1]) * val));
    a->tmp_matrix[0][1] = sin(2 * (atoi(a->tab[a->i + 1]) * val));
    a->tmp_matrix[1][0] = sin(2 * (atoi(a->tab[a->i + 1]) * val));
    a->tmp_matrix[1][1] = -cos(2 * (atoi(a->tab[a->i + 1]) * val));
    printf("Reflection over an axis with an inclination angle of");
    printf(" %d degrees\n", atoi(a->tab[a->i + 1]));
    multiplie_matrix_first(a);
    free(a->tmp_matrix);
    a->tmp_matrix = create_the_matrix(3, 3);
}

void free_struct(a_t *a)
{
    for (int i = 3; i > 0; i--)
        free(a->matrix[i]);
    free(a->matrix);
    free(a->return_tab);
    a->tab = NULL;
    free(a);
}
