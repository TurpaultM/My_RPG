/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** change the cmp color 2
*/

#include "my_rpg.h"
#include "character.h"

void verif_if_comp_taken(character_t *prs, int mu_x, int mu_y)
{
    for (int i = 0; i < 9; i++) {
        sfRectangleShape_setFillColor(prs->cpt[i]->button, sfWhite);
        sfRectangleShape_setOutlineThickness(prs->cpt[i]->button, 1);
    }
    for (int i = 0; i < 9; i++) {
        if (prs->all_comp[i] == '1') {
            sfRectangleShape_setFillColor(prs->cpt[i]->button, sfBlue);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[i]->button, sfWhite);
        }
    }
}

void change_color_8(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[8]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[8]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 8) == true
        && prs->all_comp[8] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[8]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[8]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[8]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[8]->button, 4);
        }
    } else {
        verif_if_comp_taken(prs, mu_x, mu_y);
    }
}

void change_color_7(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[7]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[7]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 7) == true
        && prs->all_comp[7] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[7]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[7]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[7]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[7]->button, 4);
        }
    } else {
        change_color_8(prs, mu_x, mu_y);
    }
}

void change_color_6(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[6]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[6]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 6) == true
        && prs->all_comp[6] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[6]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[6]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[6]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[6]->button, 4);
        }
    } else {
        change_color_7(prs, mu_x, mu_y);
    }
}

void change_color_5(character_t *prs, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(prs->cpt[5]->button).x;
    int y = sfRectangleShape_getPosition(prs->cpt[5]->button).y;

    if (mu_x >= x && mu_x <= (x + 100) && mu_y >= y && mu_y <= (y + 100)) {
        if (nb_comp(prs) < 3 && set_comp(prs, 5) == true
        && prs->all_comp[5] == '0') {
            sfRectangleShape_setFillColor(prs->cpt[5]->button, sfGreen);
            sfRectangleShape_setOutlineThickness(prs->cpt[5]->button, 4);
        } else {
            sfRectangleShape_setFillColor(prs->cpt[5]->button, sfRed);
            sfRectangleShape_setOutlineThickness(prs->cpt[5]->button, 4);
        }
    } else {
        change_color_6(prs, mu_x, mu_y);
    }
}
