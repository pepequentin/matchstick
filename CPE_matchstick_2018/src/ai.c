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

int error(int ac, char **av)
{
    if (ac != 3)
        return (0);
    for (int i = 1; i != 3; i++)
        if ((av[i][0] >= 'a' && av[i][0] <= 'z') || \
            (av[i][0] >= 'A' && av[i][0] <= 'Z'))
            return (0);
    return (1);
}

int theend(me_t me, int here, int i, int j)
{
    if (me.map[i][j] == '|')
        here += 1;
    return (here);
}

int thisis(me_t me, int i)
{
    int here = 0;
    for (int i = 1; i != me.levels - 1; i++)
        for (int j = 1; j != me.chamber - 1; j++)
            here = here + theend(me, here, i, j);
    if (here == 0)
        return (2);
    else
        return (1);
}

int proble(me_t me, int i)
{
    doai(&me);
    boucle_map(me);
    sticky(me);
    if (thisis(me, i) == 2)
        i = 2;
    return (i);
}

void doai(me_t *me)
{
    my_printf("\nAI's turn...\n");
    for (int i = 0; i != 1; ) {
        me->l = random() % (me->levels);
        if (me->stick_m[me->l] > 0)
            i = 1;
    }
    for (int i = 0; i != 1; ) {
        me->n = random() % 22 + 1;
        if (me->stick_m[me->l] >= me->n && me->n <= me->nbr_stick)
            i = 1;
    }
    my_printf("AI removed %d match(es) from line %d\n", me->n, me->l);
}