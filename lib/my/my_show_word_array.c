/*
** EPITECH PROJECT, 2020
** myrunner_boostrap
** File description:
** my_show_word_array.c
*/

#include <stdlib.h>
#include "my.h"

int my_show_word_array(char **tab)
{
    int i = 0;

    while (tab[i] !=  NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}