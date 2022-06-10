/*
** EPITECH PROJECT, 2022
** mous_keyboard
** File description:
** choose_upgrades_2
*/

#include "character.h"

void choosege_up_4(character_t *prs, sfColor sfGray, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[5]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[5]->button).y;

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40) &&
    prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->speed++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->speed), (sfVector2f){1450, 275}, 7);
        }
    }
}

void choosege_up_3(character_t *prs, sfColor sfGray, int mu_x, int mu_y)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[4]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[4]->button).y;

    if (mu_x >= x_l && mu_x <= (x_l + 40) && mu_y >= y_l && mu_y <= (y_l + 40)
    && prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->intelligence++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->intelligence),
            (sfVector2f){1450, 335}, 6);
        }
    } else {
        choosege_up_4(prs, sfGray, mu_x, mu_y);
    }
}

void choosege_up_2_cont(character_t *prs, sfColor sfGray, int mu_x, int mu_y)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[3]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[3]->button).y;

    if (mu_x >= x_l && mu_x <= (x_l + 40) && mu_y >= y_l && mu_y <= (y_l + 40)
    && prs->screen == 1) {
        if (prs->competences >= 1) {
            prs->competences--;
            prs->damages++;
            set_text(prs, int_to_char(prs->competences),
            (sfVector2f){1664, 90}, 0);
            set_text(prs, int_to_char(prs->damages),
            (sfVector2f){1120, 395}, 4);
        }
    } else {
        choosege_up_3(prs, sfGray, mu_x, mu_y);
    }
}
