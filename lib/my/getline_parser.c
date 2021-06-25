/*
** EPITECH PROJECT, 2020
** stumper
** File description:
** getline_parser.c
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

char **getline_parser(void)
{
    char **array = NULL;
    char *buffer = NULL;
    size_t size = 0;
    while (getline(&buffer, &size, stdin) > 0)
        array = append_to_tab(array, buffer);
    return (array);
}
