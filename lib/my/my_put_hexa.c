/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-mathieu.muty
** File description:
** my_put_hexa.c
*/

#include "my.h"

void my_put_hexa(int nb)
{
    int hexa = 16;

    if (nb < 0) {
        my_putchar('-');
    }

    if (nb >= hexa - 1)
        my_put_hexa(nb / hexa);
    my_putchar(hexa_tab[nb % hexa]);
}