/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** a function that that reverses a string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int y = 0;
    int z = 0;
    char s;

    while (str[y] != '\0') {
        y++;
    }
    y--;
    while (y > z) {
        s = str[y];
        str[y] = str[z];
        str[z] = s;
        z++;
        y--;
    }
    return (str);
    str[y] = '\0';
}
