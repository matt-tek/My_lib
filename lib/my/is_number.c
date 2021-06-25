/*
** EPITECH PROJECT, 2020
** B-CPE-200-RUN-2-1-matchstick-mathieu.muty
** File description:
** is_number.c
*/

#include "my.h"
#include <stdbool.h>

bool is_number(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] != '\n' && (str[i] < '0' || str[i] > '9'))
            return (true);
    }
    return (false);
}