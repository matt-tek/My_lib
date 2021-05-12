/*
** EPITECH PROJECT, 2020
** B-PSU-101-RUN-1-1-minishell1-mathieu.muty
** File description:
** my_tabdup.c
*/

#include "my.h"
#include <stdlib.h>

char **my_tabdup(char **array)
{
    int i = 0;
    char **tab = malloc(sizeof(char *) * (my_tablen(array) + 1));

    if (tab == NULL) {
        free(tab);
        return (NULL);
    }
    for (; array[i] != NULL; i++)
        tab[i] = my_strdup(array[i]);
    tab[i] = NULL;
    return (tab);
}