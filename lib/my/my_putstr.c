/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}