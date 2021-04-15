/*
** EPITECH PROJECT, 2020
** Documents
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;

    while (str[i] == '+' ||  str[i] == '-') {
        if (str[i] == '-') {
            sign = sign * -1;
        }
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            nb = str[i] - 48 + (nb * 10);
        else
            return (nb * sign);
        i++;
    }
    return (nb * sign);
}