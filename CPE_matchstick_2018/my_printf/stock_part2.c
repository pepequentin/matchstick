/*
** EPITECH PROJECT, 2018
** stock2
** File description:
** stock2
*/
#include <unistd.h>
#include <stdarg.h>
#include "include/my.h"

int	character(va_list param)
{
    my_putchar(va_arg(param, int));
}

int	string(va_list param)
{
    my_putstr(va_arg(param, char *));
}

int	string_string(va_list param)
{
    my_octal(va_arg(param, char const *));
}

int	pointer(va_list param)
{
    my_pointer(va_arg(param, int));
}

int	binaries(va_list param)
{
    my_put_nbr_base(va_arg(param, int), "01");
}
