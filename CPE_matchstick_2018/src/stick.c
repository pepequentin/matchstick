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

int my_printf(char *str, ...);

void stage(me_t *me, int i, int j)
{
    if (me->map[i][j] == '|') {
        me->stick++;
        me->here += 1;
    }
}

int other(me_t me, int j)
{
    if (the(me, j) == 0)
        j = 0;
    else
        j = proble(me, j);
    return (j);
}

int bou(me_t me, size_t size, char *buffer, int i)
{
    int j = 1;
    int ret = 0;

    while (j == 1) {
        my_printf("\nYour turn:\n");
        for (int i = 0; i != 1; ) {
            ret = get_line(&me, size, buffer);
            if(ret == 1)
                return (0);
            i = get_line2(&me, size, buffer, i);
            if(i == 2)
                return (0);
        }
        my_printf("Player removed %d match(es) from line %d\n", me.n, me.l);
        boucle_map(me);
        sticky(me);
        j = other(me ,j);
    }
    i = print(j, &me);
    return (i);
}

int batonnets(me_t me, size_t size, char *buffer, int i)
{
    for (int i = 0; i != me.levels; i++) {
        for (int j = 0; j != me.chamber; j++)
            charge_map(&me, i, j);
        my_printf("%s\n", me.map[i]);
        me.classik += 1;
    }
    sticky(me);
    i = bou(me, size, buffer, i);
    return (i);
}

int test(int ac, char **av, me_t me, int i)
{
    char *buffer = NULL;
    size_t size = 0;
    me.levels = my_get_nbr(av[1]) + 2;
    me.nbr_stick = my_get_nbr(av[2]);
    me.stick_m = malloc(sizeof(int) * me.levels + 1);
    if (check_error(ac, av) == 0)
        return (84);
    map(ac, av, &me);
    malloc_map(&me);
    i = batonnets(me, size, buffer, i);
    return (i);
}