/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** change_color2
*/

#include "character.h"

void change_color_of_button5_cont(global *g, int mx, int my)
{
    int xb = sfRectangleShape_getPosition(g->menu.button_menu[19]->button).x;
    int yb = sfRectangleShape_getPosition(g->menu.button_menu[19]->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mx >= xb && mx <= (xb + 400) && my >= yb && my <= (yb + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[19]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[19]->button,
        4);
    } else {
        for (int i = 2; i < 9; i++) {
            sfRectangleShape_setFillColor(g->menu.button_menu[i]->button,
            sfWhite);
            sfRectangleShape_setOutlineThickness(
            g->menu.button_menu[i]->button, 1);
        }
        sfRectangleShape_setFillColor(g->menu.button_menu[19]->button,
        sfWhite);
        sfRectangleShape_setOutlineThickness(
        g->menu.button_menu[19]->button, 1);
    }
}

void change_color_of_button5(global *g)
{
    int mx = sfMouse_getPositionRenderWindow(g->window).x;
    int my = sfMouse_getPositionRenderWindow(g->window).y;
    int xb = sfRectangleShape_getPosition(g->menu.button_menu[6]->button).x;
    int yb = sfRectangleShape_getPosition(g->menu.button_menu[6]->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mx >= xb && mx <= (xb + 400) && my >= yb && my <= (yb + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[6]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[6]->button,
        4);
    } else {
        sfRectangleShape_setFillColor(g->menu.button_menu[6]->button, sfWhite);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[6]->button,
        1);
    }
}

void change_color_of_button_6(global *g, int mx, int my)
{
    int xf = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).x;
    int yf = sfRectangleShape_getPosition(g->menu.button_menu[8]->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mx >= xf && mx <= (xf + 400) && my >= yf && my <= (yf + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[8]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[8]->button,
        4);
    } else if (g->screen != 0) {
        change_color_of_button5_cont(g, mx, my);
    } else {
        for (int i = 2; i < 9; i++) {
            sfRectangleShape_setFillColor(g->menu.button_menu[i]->button,
            sfWhite);
            sfRectangleShape_setOutlineThickness(
            g->menu.button_menu[i]->button, 1);
        }
    }
}

void change_color_of_button4(global *g, int mx, int my)
{
    int xb = sfRectangleShape_getPosition(g->menu.button_menu[5]->button).x;
    int yb = sfRectangleShape_getPosition(g->menu.button_menu[5]->button).y;
    int x_cre = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).x;
    int y_cre = sfRectangleShape_getPosition(g->menu.button_menu[3]->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mx >= xb && mx <= (xb + 400) && my >= yb && my <= (yb + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[5]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[5]->button,
        4);
    } else if (mx >= x_cre && mx <= (x_cre + 400) && my >= y_cre
    && my <= (y_cre + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[3]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[3]->button,
        4);
    } else {
        change_color_of_button_6(g, mx, my);
    }
}
