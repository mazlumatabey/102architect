/*
** EPITECH PROJECT, 2018
** my_struct.h
** File description:
** .
*/

#ifndef MY_STRUCT_H_
#define MY_STRUCT_H_

typedef struct architect
{
    int i;
    char **tab;
    float **tmp_matrix;
    float **matrix;
    float *return_tab;
    float x;
    float y;
    float c00;
    float c01;
    float c02;
    float c10;
    float c11;
    float c12;
    float c20;
    float c21;
    float c22;
} a_t;

float *translation_matrix(a_t *a);
float **create_the_matrix(float x, float y);
float *scaling_matrix(a_t *a);
float *rotate_matrix(a_t *a);
float *reflection_matrix(a_t *a);
void free_struct(a_t *a);
void help_flag(void);
void multiplie_matrix_first(a_t *a);
void multiplie_matrix_second(a_t *a);

#endif /* MY_STRUCT_H_ */
