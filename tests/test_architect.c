/*
** EPITECH PROJECT, 2018
** test_102_architect_2018.c
** File description:
** units tests for the 102_architect project
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

char *res = "USAGE\n\t./102architect x y transfo1 arg11 [arg12] [transfo2 "
    "arg12 [arg22]] ...\n"
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

int architect(int ac, char **av);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(architect, outpout_of_helper, .init = redirect_all_std)
{
    int ac = 2;
    char *av[] = {"102architect", "-h"};

    architect(ac, av);
    cr_assert_stdout_eq_str(res);
}

Test(architect, return_value_of_helper, .init = redirect_all_std)
{
    int ac = 2;
    char *av[] = {"102architect", "-h"};
    int dest = architect(ac, av);

    cr_assert_eq(dest, 0);
}
