/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_putnbr.c
*/

#include "my.h"
#include <unistd.h>

void my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        write(1, "2147483648", 10);
        return;
    }

    if (nb < 0 && nb != -2147483648) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 10)
        my_putchar(nb + '0');

    else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
}