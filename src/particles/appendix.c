/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** appendix
*/

#include "character.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i++;
    }
    return (s1[i] - s2[i]);
}

void my_put_pixel(pixel_t *buffer, unsigned int x, unsigned int y,
global *glob)
{
    if (x < glob->width && y < glob->height) {
        buffer->pixels[4 * (y * buffer->width + x)] = glob->color.r;
        buffer->pixels[4 * (y * buffer->width + x) + 1] = glob->color.g;
        buffer->pixels[4 * (y * buffer->width + x) + 2] = glob->color.b;
        buffer->pixels[4 * (y * buffer->width + x) + 3] = glob->color.a;
    }
}

void particle_animation(global *glob, effect_t *effect)
{
    effect->speed -= 0.0025;
    effect->end.y -= effect->speed;
    effect->beg.y += effect->speed;
    if (effect->end.y <= 0 || effect->end.y >= glob->height + 10)
        random_pos_particle(glob, effect);
}

void effect_part(global *glob, char *type)
{
    if (my_strcmp(type, "fire") == 0)
        glob->color = sfRed;
    if (my_strcmp(type, "heal") == 0)
        glob->color = sfGreen;
    if (my_strcmp(type, "poison") == 0)
        glob->color = sfColor_fromRGB(127, 0, 255);
    if (my_strcmp(type, "bleed") == 0)
        glob->color = sfColor_fromRGB(255, 20, 100);
        draw_particle(glob, glob->part);
        refresh(glob, &sfTransparent);
}
