/*
** EPITECH PROJECT, 2018
** framebuffer
** File description:
** framebuffer
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

struct framebuffer_s
{
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer_s framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
unsigned int y, sfColor color);

#endif /* FRAMMEBUFFER_H_ */
