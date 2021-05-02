/*
** EPITECH PROJECT, 2020
** my
** File description:
** nbr_word.c
*/

#include <stdio.h>

int my_nbr_occ(char const *str, char c)
{
    int word = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            word++;
    }
    return (word);
}