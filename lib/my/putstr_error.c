/*
** EPITECH PROJECT, 2020
** B-PSU-101-RUN-1-1-minishell1-mathieu.muty
** File description:
** putstr_error.c
*/

#include "../include/minish.h"
#include "../include/my.h"

void putstr_error(char const *str)
{
    int len = my_strlen(str) + 1;

    write(2, str, len);
}