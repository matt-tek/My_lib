/*
** EPITECH PROJECT, 2020
** printf
** File description:
** give_arg.c
*/

#include "my.h"

void my_print_char(va_list argv)
{
    my_putchar(va_arg(argv, int));
}

void my_print_number(va_list argv)
{
    my_put_nbr(va_arg(argv, int));
}

void my_print_string(va_list argv)
{
    my_putstr(va_arg(argv, char *));
}

void my_print_hexa(va_list argv)
{
    my_put_hexa(va_arg(argv, int));
}