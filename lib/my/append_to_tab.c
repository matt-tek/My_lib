/*
** EPITECH PROJECT, 2020
** My_lib
** File description:
** append_to_tab.c
*/

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char **append_to_tab(char **array, char const *str)
{
    int i = 0;
    char **new_array = NULL;

    if (array == NULL) {
        array = malloc(sizeof(char *) * 2);
        array[0] = my_strdup(str);
        array[1] = NULL;
        return (array);
    }
    new_array = malloc(sizeof(char *) * (my_tablen(array) + 2));
    for (; array[i]; i++)
        new_array[i] = my_strdup(array[i]);
    new_array[i] = my_strdup(str);
    new_array[i + 1] = NULL;
    free_tab(array);
    return (new_array);
}