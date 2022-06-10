/*
** EPITECH PROJECT, 2022
** init_struct_fight.c
** File description:
** init_struct
*/

#include "my_rpg.h"
#include "character.h"
#include "fight.h"

sfColor init_color_rect(rect_t *rect, int i)
{
    sfColor sfDarkGray = sfColor_fromRGB(150, 150, 150);
    sfColor sfGray = sfColor_fromRGB(200, 200, 200);
    sfColor sfCyan = sfColor_fromRGB(0, 255, 255);

    if (i < 2)
        rect[i].color = sfGray;
    if (i >= 2 && i < 7)
        rect[i].color = sfBlue;
    if (i >= 7 && i < 9)
        rect[i].color = sfRed;
    if (i >= 9 && i < 10)
        rect[i].color = sfDarkGray;
    if (i >= 10 && i < 12)
        rect[i].color = sfGreen;
    if (i >= 12 && i < 14)
        rect[i].color = sfCyan;
    if (i == 7 || i == 10 || i == 12)
        rect[i].color = sfTransparent;
    return rect[i].color;
}

rect_t init_pos_size_struct(rect_t *rect, int i, float **porcent)
{
    sfVector2f pos = {1920 * porcent[i][2], 1080 * porcent[i][3]};
    sfVector2f size = {1920 * porcent[i][0], 1080 * porcent[i][1]};

    rect[i].porcent_size_x = porcent[i][0];
    rect[i].porcent_size_y = porcent[i][1];
    rect[i].porcent_pos_x = porcent[i][2];
    rect[i].porcent_pos_y = porcent[i][3];
    rect[i].pos = pos;
    rect[i].size = size;
    return rect[i];
}

rect_t *init_struct_fight(rect_t *rect)
{
    float **porcent = init_porcent();

    for (int i = 0; i != 14; i++) {
        rect[i].color = init_color_rect(rect, i);
        rect[i] = init_pos_size_struct(rect, i, porcent);
        rect[i].rect = sfRectangleShape_create();
        sfRectangleShape_setOutlineColor(rect[i].rect, sfBlack);
        sfRectangleShape_setOutlineThickness(rect[i].rect, 1);
        sfRectangleShape_setFillColor(rect[i].rect, rect[i].color);
        sfRectangleShape_setPosition(rect[i].rect, rect[i].pos);
        sfRectangleShape_setSize(rect[i].rect, rect[i].size);
        free(porcent[i]);
    }
    free(porcent);
    return rect;
}
