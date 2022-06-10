/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** change color of comp squares
*/

#include "my_rpg.h"
#include "character.h"

void change_color_4(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[4]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[4]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 4) == true
        && prs->all_comp[4] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[4]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[4]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[4]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[4]->button, 4);
        }
    } else {
        change_color_5(prs, mu_x, mu_y);
    }
}

void change_color_3(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[3]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[3]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 3) == true
        && prs->all_comp[3] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[3]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[3]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[3]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[3]->button, 4);
        }
    } else {
        change_color_4(prs, mu_x, mu_y);
    }
}

void change_color_2(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[2]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[2]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 2) == true
        && prs->all_comp[2] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[2]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[2]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[2]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[2]->button, 4);
        }
    } else {
        change_color_3(prs, mu_x, mu_y);
    }
}

void change_color_1(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[1]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[1]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 1) == true
        && prs->all_comp[1] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[1]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[1]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[1]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[1]->button, 4);
        }
    } else {
        change_color_2(prs, mu_x, mu_y);
    }
}

void change_color(character_t *prs, global *global)
{
    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    int x = sfRectangleShape_getPosition(prs->cpt[0]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[0]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 0) == true
        && prs->all_comp[0] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[0]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[0]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[0]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[0]->button, 4);
        }
    } else {
        change_color_1(prs, mu_x, mu_y);
    }
}
