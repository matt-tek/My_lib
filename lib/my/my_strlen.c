/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_strlen.c
*/

#include <string.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}