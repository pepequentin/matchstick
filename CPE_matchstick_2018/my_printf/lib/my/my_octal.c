/*
** EPITECH PROJECT, 2018
** octal
** File description:
** octal
*/

#include "../../include/my.h"

int my_octal(char const *str)
{
    int j = 0;
    while (str[j] != '\0') {
        if (str[j] < 32 && str[j] > 7) {
            my_putstr("\\0");
            my_put_nbr_base(str[j], "01234567");
        }
        else if (str[j] < 8) {
            my_putstr("\\0");
            my_put_nbr_base(str[j], "01234567");
        }
        else if (str[j] == 127)
            my_putstr("\\177");
        else
            my_putchar(str[j]);
        j++;
    }
    return (0);
}
