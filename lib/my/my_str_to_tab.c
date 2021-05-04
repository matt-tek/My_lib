/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_str_to_word_array.c
*/

#include "my.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

bool check_char(char c, char to_find)
{
    if (c != to_find)
        return (false);
    return (true);
}

char **my_str_to_tab(char const *str, char c)
{
    unsigned int x = 0;
    unsigned int y = 0;
    unsigned int index = 0;
    unsigned int nb_occ = 0;
    char **tab = NULL;
    nb_occ = my_nbr_occ(str, c);
    tab = malloc(sizeof(char *) * (nb_occ + 1));
    for (; x < nb_occ; x++) {
        y = 0;
        while (check_char(str[index], c))
            index++;
        tab[x] = malloc(sizeof(char) * my_strlen(str) + 1);
        while (!check_char(str[index], c) && str[index] != '\0') {
            tab[x][y] = str[index];
            index++;
            y++;
        }
    }
    tab[x] = NULL;
    return (tab);
}