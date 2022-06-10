/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** init_particle
*/

#include "my_rpg.h"

float float_rand(float const min, float const max)
{
    float res = (float)rand() / (float)(__INT_MAX__) * max;
    return (res);
}

void random_pos_particle(global *glob, effect_t *effect)
{
    effect->beg.x = float_rand(0.0, (float)glob->width);
    effect->beg.y = float_rand(0.0, (float)((int)(glob->height)));
    effect->len = float_rand(5.0, 20.0);
    effect->speed = float_rand(0.0, 1.0);
    effect->color = glob->color;
    effect->end.x = effect->beg.x;
    effect->end.y = effect->beg.y + effect->len;
}

effect_t *set_particle(global *glob)
{
    effect_t *effect = malloc(sizeof(effect_t));

    random_pos_particle(glob, effect);
    return (effect);
}

pixel_t *set_pixel(unsigned int width, unsigned int height)
{
    pixel_t *pixel = malloc(sizeof(pixel_t));

    pixel->width = width;
    pixel->height = height;
    pixel->pixels = malloc((32 / 4) * width * height);
    return (pixel);
}

void init_part(global *glob)
{
    glob->nb_part = 30;
    glob->part = malloc(sizeof(effect_t *) * glob->nb_part);
    glob->width = 200;
    glob->height = 200;
    glob->pixel = set_pixel(glob->width, glob->height);
    sfImage *ima = sfImage_createFromColor(glob->width, glob->height, sfBlack);
    sfImage_createMaskFromColor(ima, sfRed, 0);
    glob->texture_part = sfTexture_createFromImage(ima, NULL);
    sfTexture_updateFromPixels(glob->texture_part, glob->pixel->pixels,
    glob->pixel->width, glob->pixel->height, 0, 0);
    glob->sprite_part = sfSprite_create();
    sfSprite_setTexture(glob->sprite_part, glob->texture_part, sfTrue);
    sfTexture_updateFromPixels(glob->texture_part, glob->pixel->pixels,
    glob->pixel->width, glob->pixel->height, 0, 0);
    sfSprite_setPosition(glob->sprite_part,
    (sfVector2f){0.25 * 1920, 0.3 * 1080});
    for (unsigned int i = 0; i < glob->nb_part; i++)
        glob->part[i] = set_particle(glob);
}
