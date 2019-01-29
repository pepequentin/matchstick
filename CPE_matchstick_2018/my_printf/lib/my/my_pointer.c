/*
** EPITECH PROJECT, 2018
** pointer
** File description:
** pointer
*/

#include "../../include/my.h"

void my_pointer(long long nb)
{
    if (nb == 0)
        my_putstr("(null)");
    else
    {
        my_putstr("0x");
        my_hexa_add(nb);
    }
}

void my_hexa_add(long long nb)
{
    int	res;

    if (nb >= 16) {
        res = nb % 16;
        nb = nb / 16;
        my_hexa_add(nb);
    }
    else if (nb > 0) {
        res = nb % 16;
        nb = nb / 16;
    }
    if (res > 9)
        my_putchar(res + 87);
    else
        my_putchar(res + 48);
}
