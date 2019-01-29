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

int print(int i, me_t *me)
{
    if (i == 0) {
        my_printf("You lost, too bad...\n");
        me->i = 2;
        return (2);
    }
    if (i == 2) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        me->i = 1;
        return (1);
    }
}

void printo(me_t *me)
{
    if (me->n > me->nbr_stick) {
        my_printf("Error: you cannot remove more than");
        my_printf(" %d matches per turn\n", me->nbr_stick);
    }
    else if (me->n == 0)
        my_printf("Error: you have to remove at least one match\n");
    else
        my_printf("Error: not enough matches on this line\n");
}

int get_line2(me_t *me, size_t size, char *buffer, int i)
{
    int ret;

    my_printf("Matches: ");
    ret = getline(&buffer, &size, stdin);
    if (ret == -1)
        return (2);
    me->n = my_get_nbrr(buffer);
    if (me->stick_m[me->l] >= me->n && me->n <= \
        me->nbr_stick && me->n != 0) {
        i = 1;
    }
    else {
        printo(me);
        i = 0;
    }
    return (i);
}

int get_line(me_t *me, size_t size, char *buffer)
{
    int ret;

    for (int i = 0; i != 1;) {
        my_printf("Line: ");
        ret = getline(&buffer, &size, stdin);
        if (ret == -1)
            return (1);
        me->l = my_get_nbrr(buffer);
        if (me->stick_m[me->l] > 0 && me->l > 0 && me->l <= \
            me->levels - 1) {
            i = 1;
        }
        else {
            my_printf("Error: this line is out of range\n");
            i = 0;
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    me_t me;

    if (error(ac, av) == 0)
        return (84);
    i = test(ac, av, me, i);
    return (i);
}
