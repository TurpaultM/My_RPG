/*
** EPITECH PROJECT, 2022
** mouse keyboards
** File description:
** choose the upgrades of stats
*/

#include "character.h"

void choosege_up_2(character_t *prs, sfColor sfGray, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[2]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[2]->button).y;

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40) &&
    prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->mana++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->mana), (sfVector2f){1120, 335}, 9);
        }
    }
    choosege_up_2_cont(prs, sfGray, mu_x, mu_y);
}

void choosege_up_cont(character_t *prs, global *global, int mu_x, int mu_y)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[1]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[1]->button).y;
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    if (mu_x >= x_l && mu_x <= (x_l + 40) && mu_y >= y_l && mu_y <= (y_l + 40)
    && prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->defenses++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->defenses),
            (sfVector2f){1120, 270}, 5);
        }
    } else {
        choosege_up_2(prs,sfGray, mu_x, mu_y);
    }
}

void choosege_up(character_t *prs, global *global)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[0]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[0]->button).y;
    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40)
    && prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->hp++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->hp), (sfVector2f){1120, 215}, 2);
        }
    }
    choosege_up_cont(prs, global, mu_x, mu_y);
}
