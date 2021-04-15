/*
** EPITECH PROJECT, 2020
** my
** File description:
** nbr_word.c
*/

#include <stdio.h>

int my_nbr_word(char const *str)
{
    int i = 0;
    int word = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            word++;
        }
        i++;
    }
    return (word);
}