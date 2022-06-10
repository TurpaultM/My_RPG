/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** change the color of stat buttons
*/

#include "character.h"

void change_color_of_stats_2_cont(character_t *prs, sfColor sfGray,
int mx, int my)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[3]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[3]->button).y;

    if (mx >= x_l && mx <= (x_l + 40) && my >= y_l && my <= (y_l + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[3]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[3]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[3]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[3]
            ->button, 4);
        }
    } else {
        change_color_of_stats_3(prs, sfGray, mx, my);
    }
}

void change_color_of_stats_2(character_t *prs, sfColor sfGray,
int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[2]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[2]->button).y;

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[2]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[2]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[2]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[2]
            ->button, 4);
        }
    } else {
        change_color_of_stats_2_cont(prs, sfGray, mu_x, mu_y);
    }
}

void change_color_of_stats_cont(character_t *prs, global *global, int mu_x,
int mu_y)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[1]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[1]->button).y;
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    if (mu_x >= x_l && mu_x <= (x_l + 40) &&
    mu_y >= y_l && mu_y <= (y_l + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[1]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[1]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[1]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[1]
            ->button, 4);
        }
    } else {
        change_color_of_stats_2(prs,sfGray, mu_x, mu_y);
    }
}

void change_color_of_stats(character_t *prs, global *global)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[0]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[0]->button).y;
    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[0]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[0]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[0]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[0]
            ->button, 4);
        }
    } else
        change_color_of_stats_cont(prs, global, mu_x, mu_y);
}
