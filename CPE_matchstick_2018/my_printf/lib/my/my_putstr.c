/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** a fonction that displays, one-by-one, the characters of a string.
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
    int  i = 0;

    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i++;
    }
    return (i);
}
