/*
** EPITECH PROJECT, 2018
** calcul_matrix
** File description:
** .
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_struct.h"
#include "my.h"

void multiplie_matrix_second(a_t *a)
{
    a->c20 = (a->tmp_matrix[2][0] * a->matrix[0][0]) +
        (a->tmp_matrix[2][1] * a->matrix[1][0]) +
        (a->tmp_matrix[2][2] * a->matrix[2][0]);
    a->c21 = (a->tmp_matrix[2][0] * a->matrix[0][1]) +
        (a->tmp_matrix[2][1] * a->matrix[1][1]) +
        (a->tmp_matrix[2][2] * a->matrix[2][1]);
    a->c22 = (a->tmp_matrix[2][0] * a->matrix[0][2]) +
        (a->tmp_matrix[2][1] * a->matrix[1][2]) +
        (a->tmp_matrix[2][2] * a->matrix[2][2]);
    a->matrix[0][0] = a->c00;
    a->matrix[0][1] = a->c01;
    a->matrix[0][2] = a->c02;
    a->matrix[1][0] = a->c10;
    a->matrix[1][1] = a->c11;
    a->matrix[1][2] = a->c12;
    a->matrix[2][0] = a->c20;
    a->matrix[2][1] = a->c21;
    a->matrix[2][2] = a->c22;
}

void multiplie_matrix_first(a_t *a)
{
    a->c00 = (a->tmp_matrix[0][0] * a->matrix[0][0]) +
        (a->tmp_matrix[0][1] * a->matrix[1][0]) +
        (a->tmp_matrix[0][2] * a->matrix[2][0]);
    a->c01 = (a->tmp_matrix[0][0] * a->matrix[0][1]) +
        (a->tmp_matrix[0][1] * a->matrix[1][1]) +
        (a->tmp_matrix[0][2] * a->matrix[2][1]);
    a->c02 = (a->tmp_matrix[0][0] * a->matrix[0][2]) +
        (a->tmp_matrix[0][1] * a->matrix[1][2]) +
        (a->tmp_matrix[0][2] * a->matrix[2][2]);
    a->c10 = (a->tmp_matrix[1][0] * a->matrix[0][0]) +
        (a->tmp_matrix[1][1] * a->matrix[1][0]) +
        (a->tmp_matrix[1][2] * a->matrix[2][0]);
    a->c11 = (a->tmp_matrix[1][0] * a->matrix[0][1]) +
        (a->tmp_matrix[1][1] * a->matrix[1][1]) +
        (a->tmp_matrix[1][2] * a->matrix[2][1]);
    a->c12 = (a->tmp_matrix[1][0] * a->matrix[0][2]) +
        (a->tmp_matrix[1][1] * a->matrix[1][2]) +
        (a->tmp_matrix[1][2] * a->matrix[2][2]);
    multiplie_matrix_second(a);
}
