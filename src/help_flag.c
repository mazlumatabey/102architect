/*
** EPITECH PROJECT, 2018
** help_flag.c
** File description:
** display the -h
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>

void help_flag(void)
{
    char *str = "USAGE\n\t./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...\n"
    "\n"
    "DESCRIPTION\n"
    "\tx\tabscissa of the original point\n"
    "\ty\tordinate of the original point\n"
    "\n"
    "\ttransfo arg1 [arg2]\n"
    "\t-t i j\ttranslation along vector (i, j)\n"
    "\t-z m n\tscaling by factors m (x-axis) and n (y-axis)\n"
    "\t-r d\trotation centered in O by a d degree angle\n"
    "\t-s d\treflection over the axis passing through O with an inclination\n"
    "\t\tangle of d degrees\n";

    write(1, str, my_strlen(str));
}
