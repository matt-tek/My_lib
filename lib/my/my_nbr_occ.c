/*
** EPITECH PROJECT, 2020
** my
** File description:
** nbr_word.c
*/

#include <stdio.h>

int my_nbr_occ(char const *str, char c)
{
    int i = 0;
    int word = 1;

    while (str[i] != '\0') {
        if (str[i] == c) {
            word++;
        }
        i++;
    }
    return (word);
}