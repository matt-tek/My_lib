/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_strdup.c
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *str = NULL;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (str == NULL)
        free(str);
        return (NULL);
    for (; src[i] != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}