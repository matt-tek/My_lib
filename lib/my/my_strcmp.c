/*
** EPITECH PROJECT, 2020
** B-PSU-101-RUN-1-1-minishell1-mathieu.muty
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char *str, char *src)
{
    for (int i = 0; src[i]; i++) {
        if (str[i] != src[i])
            return (1);
    }
    return (0);
}