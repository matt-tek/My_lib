/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    char new = 0;
    int i = my_strlen(str) - 1;
    int j = 0;

    while (j <= i) {
        new = str[i];
        str[i] = str[j];
        str[j] = new;
        i--;
        j++;
    }
    return (str);
}