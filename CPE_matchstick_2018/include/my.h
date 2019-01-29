/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** all the functions
*/

#include <stdarg.h>
#include "struct.h"

void charge_map(me_t *me, int i, int j);
void malloc_map(me_t *me);
int check_error(int ac, char **av);
void map(int ac, char **av, me_t *me);
int my_get_nbr(char *str);
int test(int ac, char **av, me_t me, int i);
int get_line(me_t *me, size_t size, char *buffer);
int end(me_t me, int here, int i, int j);
int the(me_t me, int i);
int theend(me_t me, int here, int i, int j);
int thisis(me_t me, int i);
int my_get_nbrr(char *str);
void boucle_map(me_t me);
void display(me_t *me, int j, int i);
int my_printf(char *str, ...);
void doai(me_t *me);
int proble(me_t me, int i);
void sticky(me_t me);
int error(int ac, char **av);
int get_line2(me_t *me, size_t size, char *buffer, int i);
int print(int i, me_t *me);
void print2(me_t *me);
void stage(me_t *me, int i, int j);