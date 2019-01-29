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

void display(me_t *me, int j, int i)
{
    if (me->map[me->l][j] == '|' && me->n > 0 && \
        me->map[me->l][j + 1] == ' ') {
        me->map[me->l][j] = ' ';
        me->n--;
    }
    else if ((me->map[me->l][j] == '|' && \
        me->map[me->l][j + 1] == '*' && \
        i != 1)) {
        me->map[me->l][j] = ' ';
        me->n--;
    }
    else {
    }
}

void boucle_map(me_t me)
{
    for (int i = 0; i != 100; i++)
        for (int j = 0; j != me.chamber; j++)
            display(&me, j, i);
    for (int i = 0; i != me.levels; i++)
        my_printf("%s\n", me.map[i]);
}

int end(me_t me, int here, int i, int j)
{
    if (me.map[i][j] == '|')
        here += 1;
    return (here);
}

int the(me_t me, int i)
{
    int here = 0;
    for (int i = 1; i != me.levels - 1; i++)
        for (int j = 1; j != me.chamber - 1; j++)
            here = here + end(me, here, i, j);
    if (here == 0)
        return (0);
    else
        return (1);
}

int my_get_nbrr(char *str)
{
    int j = 0;
    int jo = 1;

    if (str[0] == '-')
        jo = -1;
    for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
        j = j * 10 + (str[i] - 48);
    return (j * jo);
}