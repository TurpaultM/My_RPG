/*
** EPITECH PROJECT, 2022
** window
** File description:
** window to choose the perso
*/

#include "character.h"

void ini_choose(global *g)
{
    g->menu.visible = 0;
    g->menu.is_character_chosen = 0;
    g->menu.choose_spr = sfSprite_create();
    g->menu.choose_texture = sfTexture_createFromFile("assets/im"
    "ages/back_choose.png", NULL);
    sfSprite_setTexture(g->menu.choose_spr, g->menu.choose_texture, sfFalse);
}

void change_color_of_button_character3_cont7(global *g, int mx, int my,
sfColor sfGray)
{
    for (int i = 13; i < 19; i++) {
        sfRectangleShape_setFillColor(g->menu.button_menu[i]->button,
        sfTransparent);
        sfRectangleShape_setOutlineThickness(
        g->menu.button_menu[i]->button, 1);
    }
}

void change_color_of_button_character3(global *g, int mx, int my,
sfColor sfGray)
{
    int x1 = sfRectangleShape_getPosition(g->menu.button_menu[17]->button).x;
    int y1 = sfRectangleShape_getPosition(g->menu.button_menu[17]->button).y;
    int x2 = sfRectangleShape_getPosition(g->menu.button_menu[18]->button).x;
    int y2 = sfRectangleShape_getPosition(g->menu.button_menu[18]->button).y;

    if (mx >= x1 && mx <= (x1 + 200) && my >= y1 && my <= (y1 + 200)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[17]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[17]->button,
        4);
    } else if (mx >= x2 && mx <= (x2 + 200) && my >= y2 && my <= (y2 + 200)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[18]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[18]->button,
        4);
    } else {
        change_color_of_button_character3_cont7(g, mx, my, sfGray);
    }
}
