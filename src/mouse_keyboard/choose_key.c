/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** buy the key that you want
*/

#include "my_rpg.h"
#include "character.h"

void choose_key_3(character_t *prs, global *global, int mx, int my)
{
    int x = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).x;
    int y = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).y;

    if (!sfMouse_isButtonPressed(sfMouseLeft)) {
        return;
    }
    if (mx >= x && mx <= (x + 100) && my >= y && my <= (y + 100)) {
        if (prs->shop_npc.key_green == 0 && prs->money >= 1000) {
            prs->shop_npc.key_green = 1;
            prs->money -= 1000;
            sfText_setString(prs->stat.text_stat[8]->text_stat,
            int_to_char(prs->money));
        }
    }
}

void choose_key_2(character_t *prs, global *global, int mx, int my)
{
    int x = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).x;
    int y = sfRectangleShape_getPosition(prs->shop_npc.shop_but[3]->button).y;

    if (!sfMouse_isButtonPressed(sfMouseLeft)) {
        return;
    }
    if (mx >= x && mx <= (x + 100) && my >= y && my <= (y + 100)) {
        if (prs->shop_npc.key_red == 0 && prs->money >= 5000) {
            prs->shop_npc.key_red = 1;
            prs->money -= 5000;
            sfText_setString(prs->stat.text_stat[8]->text_stat,
            int_to_char(prs->money));
        }
    }
    choose_key_3(prs,global, mx, my);
}

void choose_key(character_t *prs, global *global)
{
    int x = sfRectangleShape_getPosition(prs->shop_npc.shop_but[1]->button).x;
    int y = sfRectangleShape_getPosition(prs->shop_npc.shop_but[1]->button).y;
    int mx = sfMouse_getPositionRenderWindow(global->window).x;
    int my = sfMouse_getPositionRenderWindow(global->window).y;

    if (!sfMouse_isButtonPressed(sfMouseLeft)) {
        return;
    }
    if (mx >= x && mx <= (x + 100) && my >= y && my <= (y + 100)) {
        if (prs->shop_npc.key_blue == 0 && prs->money >= 1000) {
            prs->shop_npc.key_blue = 1;
            prs->money -= 1000;
            sfText_setString(prs->stat.text_stat[8]->text_stat,
            int_to_char(prs->money));
        }
    }
    choose_key_2(prs,global, mx, my);
}
