/*
** EPITECH PROJECT, 2019
** aie
** File description:
** aie
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/struct.h"
#include "../include/my.h"

void charge_map(me_t *me, int i, int j)
{
    if (i == 0 || j == 0 || i == me->levels - 1 || j == me->chamber - 1)
        me->map[i][j] = '*';
    else if (me->temp - me->classik <= j && j <= me->temp + me->classik)
        me->map[i][j] = '|';
    else
        me->map[i][j] = ' ';
}

int my_get_nbr(char *str)
{
    int i = 0;
    int n = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9'))
            return (0);
        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n /= 10;
    if (str[0] == '-')
        return (-n);
    else
        return (n);
}

void malloc_map(me_t *me)
{
    me->map = malloc(sizeof(char *) * me->levels);
    me->temp = me->chamber / 2;
    me->classik = -1;
    for (int i = 0; i != me->levels; i++)
        me->map[i] = malloc(sizeof(char) * me->chamber);
}

int check_error(int ac, char **av)
{
    if (ac != 3)
        return (0);
    else if (my_get_nbr(av[1]) == 0)
        return (0);
    else
        return (1);
}

void map(int ac, char **av, me_t *me)
{
    me->levels = my_get_nbr(av[1]) + 2;
    int x = me->levels - 4;
    me->nbr_stick = my_get_nbr(av[2]);

    if (me->levels > 4)
        me->chamber = me->levels + 1 + x;
    else if (me->levels == 4)
        me->chamber = me->levels + 1;
}