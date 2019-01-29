/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task
*/

#include <unistd.h>
#include "../../include/my.h"

int my_put_nbr_base(int nb, char *base)
{
    int result;
    int rest;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    result = nb / my_strlen(base);
    rest = nb % my_strlen(base);
    if (result > 0)
        my_put_nbr_base(result, base);
    my_putchar(base[rest]);
    return (0);
}
