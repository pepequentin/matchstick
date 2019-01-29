/*
** EPITECH PROJECT, 2018
** my_printfde
** File description:
** my_printfded
*/

#include <stdlib.h>
#include <stdarg.h>
#include "include/my.h"

int test_stock(int stock, va_list param)
{
    switch (stock) {
    case 'd':
        decimal_int(param);
        break;
    case 'i':
        decimal_int(param);
        break;
    case 'u':
        unsigned_decimal(param);
        break;
    case 'o':
        octal(param);
        break;
    default:
        test_stock2(stock, param);
        break;
    }
}

int test_stock2(int stock, va_list param)
{
    switch (stock) {
    case 's':
        string(param);
        break;
    case 'S':
        string_string(param);
        break;
    case 'x':
        hexadecimal(param);
        break;
    case 'X':
        hexadecimal_upp(param);
        break;
    case 'c':
        character(param);
        break;
    default:
        test_stock4(stock, param);
        break;
    }
}

int test_stock4(int stock, va_list param)
{
    switch (stock) {
    case 'p':
        pointer(param);
        break;
    case 'b':
        binaries(param);
        break;
    case 'g':
        my_putchar('0');
        break;
    case 'G':
        my_putchar('0');
        break;
    default:
        my_putchar('%');
        my_putchar(stock);
        break;
    }
}

void modu(char *str, int str_c)
{
    if (str[str_c] == '%' && str[str_c + 1] == '%')
        my_putchar('%');
    else
    {
        my_putchar('%');
        my_putchar(str[str_c + 1]);
    }
}

int my_printf(char *str, ...)
{
    va_list param;
    va_start(param, str);
    int stock = 0;
    int str_c = 0;

    for (str_c = 0; str[str_c] != '\0'; str_c++) {
        if (str[str_c] == '%' && str[str_c + 1] == '%') {
            str_c++;
            modu(str, str_c);
        } else if (str[str_c] == '%') {
            str_c++;
            stock = str[str_c];
            test_stock(stock, param);
        }
        if (str[str_c - 1] != '%' ) {
            my_putchar(str[str_c]);
        }
    }
    va_end(param);
    return (0);
}