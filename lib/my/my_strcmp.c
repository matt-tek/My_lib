/*
** EPITECH PROJECT, 2020
** B-PSU-101-RUN-1-1-minishell1-mathieu.muty
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char *str, char *src)
{
    int str_len = 0;
    int src_len = 0;

    src_len = my_strlen(src);
    str_len = my_strlen(str);
    if (str_len > src_len || src_len > str_len)
        return (1);
    for (int i = 0; str[i]; i++) {
        if (str[i] != src[i])
            return (1);
    }
    return (0);
}