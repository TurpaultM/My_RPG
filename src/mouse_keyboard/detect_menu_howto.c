/*
** EPITECH PROJECT, 2022
** mouse keyboard
** File description:
** deteect how to
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

int detect_menu_howto2(global *g, int mu_x, int mu_y)
{
    int x_n = sfRectangleShape_getPosition(g->menu.button_menu[21]->button).x;
    int y_n = sfRectangleShape_getPosition(g->menu.button_menu[21]->button).y;

    if (mu_x >= x_n && mu_x <= (x_n + 400) && mu_y >= y_n && mu_y <=
    (y_n + 100) && g->screen == 0 && g->menu.visible == 7) {
        g->menu.visible = 8;
    }
    if (mu_x >= x_n && mu_x <= (x_n + 400) && mu_y >= y_n && mu_y <=
    (y_n + 100) && g->screen == 0 && g->menu.visible == 6) {
        g->menu.visible = 7;
    }
}

int detect_menu_howto(global *g, int mu_x, int mu_y)
{
    int x_n = sfRectangleShape_getPosition(g->menu.button_menu[21]->button).x;
    int y_n = sfRectangleShape_getPosition(g->menu.button_menu[21]->button).y;

    if (mu_x >= x_n && mu_x <= (x_n + 400) && mu_y >= y_n && mu_y <=
    (y_n + 100) && g->screen == 0 && g->menu.visible == 11) {
        g->menu.visible = 0;
    }
    if (mu_x >= x_n && mu_x <= (x_n + 400) && mu_y >= y_n && mu_y <=
    (y_n + 100) && g->screen == 0 && g->menu.visible == 9) {
        g->menu.visible = 11;
    }
    if (mu_x >= x_n && mu_x <= (x_n + 400) && mu_y >= y_n && mu_y <=
    (y_n + 100) && g->screen == 0 && g->menu.visible == 8) {
        g->menu.visible = 9;
    }
    detect_menu_howto2(g, mu_x, mu_y);
}
