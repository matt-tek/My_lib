/*
** EPITECH PROJECT, 2020
** printf
** File description:
** my_printf.c
*/

#include "my.h"
#include <stdarg.h>
#include <stddef.h>

printf_t flags [] = {
    {'d', &my_print_number},
    {'s', &my_print_string},
    {'c', &my_print_char},
    {'x', &my_print_hexa},
    {'/', NULL},
};

void check_flags(va_list argv, char flag)
{
    int i = 0;

    while (flags[i].c != '/') {
        if (flags[i].c == flag) {
            flags[i].ptr(argv);
        }
    i++;
    }
}

void my_printf(char const *str, ...)
{
    va_list argv;
    int i = 0;

    va_start(argv, str);
    while (str[i] != '\0' && str[i] != '%') {
        my_putchar(str[i]);
        if (str[i + 1] == '%') {
            check_flags(argv, str[i + 2]);
        }
        i++;
    }
    va_end(argv);
}