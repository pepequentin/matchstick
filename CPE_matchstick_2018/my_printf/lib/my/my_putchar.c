/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** task01
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
