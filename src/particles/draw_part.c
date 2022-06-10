/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** draw_part
*/

#include "character.h"

void draw_effect(pixel_t *pxl, sfVector2f beg, sfVector2f end, global *glob)
{
    int dx = end.x - beg.x;
    int dy = end.y - beg.y;
    float x = beg.x;
    float y = beg.y;
    unsigned int part = 0;

    if (abs(dx) > abs(dy)) {
        part = abs(dx);
    } else {
        part = abs(dy);
    }
    for (unsigned int i = 0; i < part + 1; i++) {
        my_put_pixel(pxl, x, y, glob);
        x = x - (dx / (float)part);
        y = y - (dy / (float)part);
    }
}

void draw_particle(global *glob, effect_t **particle)
{
    for (unsigned int i = 0; i < glob->nb_part; i++) {
        if (particle[i]->end.y > 0)
            draw_effect(glob->pixel, particle[i]->beg,
            particle[i]->end, glob);
        particle_animation(glob, particle[i]);
    }
}

void framebuffer_clear(pixel_t *pixel, sfColor color)
{
    for (unsigned int row = 0 ; row < pixel->height ; row++) {
        for (unsigned int col = 0 ; col < pixel->width ; col++) {
            pixel->pixels[4 * (row * pixel->width + col)] = color.r;
            pixel->pixels[4 * (row * pixel->width + col) + 1] = color.g;
            pixel->pixels[4 * (row * pixel->width + col) + 2] = color.b;
            pixel->pixels[4 * (row * pixel->width + col) + 3] = color.a;
        }
    }
}

void refresh(global *glob, sfColor *color)
{
    sfTexture_updateFromPixels(glob->texture_part, glob->pixel->pixels,
    glob->width, glob->height, 0, 0);
    sfRenderWindow_drawSprite(glob->window, glob->sprite_part, NULL);
    if (color)
        framebuffer_clear(glob->pixel, *(color));
}
