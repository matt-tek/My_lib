/*
** EPITECH PROJECT, 2020
** my
** File description:
** free_tab.c
*/

#include "my.h"
#include "printf.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void free_tab(char **array)
{
    for (int i = 0; array[i]; i++) {
        free(array[i]);
        array[i] = NULL;
    }
    free(array);
    array = NULL;
}