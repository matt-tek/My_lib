/*
** EPITECH PROJECT, 2020
** myrunner_boostrap
** File description:
** my_show_word_array.c
*/

#include <stdlib.h>
#include "my.h"

void my_show_word_array(char **tab)
{
    for (int i = 0; tab[i] !=  NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}