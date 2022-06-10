/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** change the color of the keys
*/

#include "my_rpg.h"
#include "character.h"

void what_color(sfColor color, character_t *prs)
{
    sfRectangleShape_setFillColor(prs->shop_npc.shop_but[2]->button, color);
    sfRectangleShape_setOutlineThickness(prs->shop_npc.shop_but[2]->button,
    4);
}

void change_color_of_keys_3(character_t *prs, global *global, int mx, int my)
{
    int x = sfRectangleShape_getPosition(prs->shop_npc.shop_but[2]->button).x;
    int y = sfRectangleShape_getPosition(prs->shop_npc.shop_but[2]->button).y;
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    if (mx >= x && mx <= (x + 100) && my >= y && my <= (y + 100)) {
        if (prs->shop_npc.key_red == 0 && prs->money > 5000) {
            what_color(sfGreen, prs);
        } else {
            what_color(sfRed, prs);
        }
    } else {
        for (int i = 1; i < 4; i++) {
            sfRectangleShape_setFillColor(prs->shop_npc.shop_but[i]->button,
            sfGray);
            sfRectangleShape_setOutlineThickness(
            prs->shop_npc.shop_but[i]->button, 1);
        }
    }
}

void change_color_of_keys_2(character_t *prs, global *global, int mx, int my)
{
    int xl = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).x;
    int yl = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).y;

    if (mx >= xl && mx <= (xl + 100) && my >= yl && my <= (yl + 100)) {
        if (prs->shop_npc.key_green == 0 && prs->money > 1000) {
            sfRectangleShape_setFillColor(prs->shop_npc.shop_but[3]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(
            prs->shop_npc.shop_but[3]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->shop_npc.shop_but[3]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(
            prs->shop_npc.shop_but[3]->button, 4);
        }
    } else {
        change_color_of_keys_3(prs, global, mx, my);
    }
}

void change_color_of_keys(character_t *prs, global *global)
{
    int x = sfRectangleShape_getPosition(prs->shop_npc.shop_but[1]->button).x;
    int y = sfRectangleShape_getPosition(prs->shop_npc.shop_but[1]->button).y;
    int mx = sfMouse_getPositionRenderWindow(global->window).x;
    int my = sfMouse_getPositionRenderWindow(global->window).y;

    if (mx >= x && mx <= (x + 100) && my >= y && my <= (y + 100)) {
        if (prs->shop_npc.key_blue == 0 && prs->money > 1000) {
            sfRectangleShape_setFillColor(prs->shop_npc.shop_but[1]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(
            prs->shop_npc.shop_but[1]->button, 4);
        } else {
            sfRectangleShape_setFillColor(
            prs->shop_npc.shop_but[1]->button, sfRed);
            sfRectangleShape_setOutlineThickness(
            prs->shop_npc.shop_but[1]->button, 4);
        }
    } else
        change_color_of_keys_2(prs, global, mx, my);
}
