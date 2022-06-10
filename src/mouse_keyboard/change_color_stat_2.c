/*
** EPITECH PROJECT, 2022
** mouse keyboard
** File description:
** change color of stat 2
*/

#include "character.h"

void change_color_of_stats_4(character_t *prs, sfColor sfGray, int mu_x,
int mu_y)
{
    for (int i = 0; i < 6; i++) {
        sfRectangleShape_setFillColor(prs->stat.text_stat[i]->button,
        sfWhite);
        sfRectangleShape_setOutlineThickness(prs->stat.text_stat[i]
        ->button, 1);
    }
}

void change_color_of_stats_3_cont(character_t *prs, sfColor sfGray,
int mu_x, int mu_y)
{
    int x_l = sfRectangleShape_getPosition(prs->stat.text_stat[5]->button).x;
    int y_l = sfRectangleShape_getPosition(prs->stat.text_stat[5]->button).y;

    if (mu_x >= x_l && mu_x <= (x_l + 40) &&
    mu_y >= y_l && mu_y <= (y_l + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[5]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[5]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[5]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[5]
            ->button, 4);
        }
    } else {
        change_color_of_stats_4(prs, sfGray, mu_x, mu_y);
    }
}

void change_color_of_stats_3(character_t *prs, sfColor sfGray,
int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->stat.text_stat[4]->button).x;
    int y = sfRectangleShape_getPosition(prs->stat.text_stat[4]->button).y;

    if (mu_x >= x && mu_x <= (x + 40) && mu_y >= y && mu_y <= (y + 40)) {
        if (prs->competences >= 1) {
            sfRectangleShape_setFillColor(prs->stat.text_stat[4]->button,
            sfGreen);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[4]
            ->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->stat.text_stat[4]->button,
            sfRed);
            sfRectangleShape_setOutlineThickness(prs->stat.text_stat[4]
            ->button, 4);
        }
    } else {
        change_color_of_stats_3_cont(prs, sfGray, mu_x, mu_y);
    }
}
