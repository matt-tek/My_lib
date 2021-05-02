/*
** EPITECH PROJECT, 2020
** my
** File description:
** nbr_word.c
*/

#include <stdio.h>

int my_nbr_word(char const *str)
{
    int word = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            word++;
    }
    return (word);
}