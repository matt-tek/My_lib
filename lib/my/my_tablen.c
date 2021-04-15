/*
** EPITECH PROJECT, 2020
** B-PSU-200-RUN-2-1-mysokoban-mathieu.muty
** File description:
** my_tablen.c
*/

#include "my.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int my_tablen(char **array)
{
    int i = 0;
    if (array == NULL) {
        free(array);
        return (0);
    }
    for (; array[i]; i++);
    return (i);
}