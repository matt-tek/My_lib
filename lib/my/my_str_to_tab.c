/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

int check_char(char c, char to_find)
{
    if (c != to_find) {
        return (1);
    } else
        return (0);
}

char **my_str_to_tab(char const *str, char c)
{
    int i = 0;
    int j = 0;
    int index = 0;
    char **tab = malloc(sizeof(char *) * my_nbr_occ(str, c) + 1);

    while (i != my_nbr_occ(str, c)) {
        j = 0;
        while (check_char(str[index], c) == 0)
            index++;
        tab[i] = malloc(sizeof(char) * my_strlen(str) + 1);
        while (check_char(str[index], c) == 1 && str[index] != '\0') {
            tab[i][j] = str[index];
            index++;
            j++;
        }
        i++;
    }
    tab[i] = NULL;
    return (tab);
}