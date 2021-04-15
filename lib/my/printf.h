/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** write printf function
*/

#ifndef PRINTF_H_
#define PRINTF_H_
#define hexa_tab "0123456789ABCDEF"
#define octal_tab "01234567"
#include <stdarg.h>

typedef struct printf
{
    char c;
    void (*ptr)(va_list);
} printf_t;


void my_printf(char const *str, ...);
void my_put_nbr(int nb);
void my_print_number(va_list argv);
void my_putchar(char c);
void my_print_char(va_list argv);
void my_putstr(char const *str);
void my_print_string(va_list argv);
void my_put_hexa(int nb);
void my_print_hexa(va_list argv);
void my_put_octal(int nb);
void my_print_octal(va_list argv);
void check_flags(va_list argv, char flag);

#endif /* !PRINTF_H_ */
