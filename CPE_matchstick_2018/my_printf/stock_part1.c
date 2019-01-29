/*
** EPITECH PROJECT, 2018
** stock1
** File description:
** stock_part1
*/
#include <unistd.h>
#include <stdarg.h>
#include "include/my.h"

int	decimal_int(va_list param)
{
    my_put_nbr(va_arg(param, int));
}

int	unsigned_decimal(va_list param)
{
    my_put_nbr(va_arg(param, unsigned int));
}

int	octal(va_list param)
{
    my_put_nbr_base(va_arg(param, int), "01234567");
}

int	hexadecimal(va_list param)
{
    my_put_nbr_base(va_arg(param, int), "0123456789abcdef");
}

int	hexadecimal_upp(va_list param)
{
    my_put_nbr_base(va_arg(param, int), "0123456789ABCDEF");
}
