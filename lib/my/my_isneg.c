/*
** EPITECH PROJECT, 2020
** task04
** File description:
** print digits
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        return (-1);
    else if (n >= 0)
        return (1);
    return (0);
}