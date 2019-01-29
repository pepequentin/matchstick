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

void sticky(me_t me)
{
    me.stick = 0;
    me.here = 0;
    for (int i = 1; i != me.levels - 1; i++) {
        for (int j = 1; j != me.chamber - 1; j++)
            stage(&me, i, j);
        me.stick_m[i] = me.stick;
        me.stick = 0;
    }
}
