/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** manage clic
*/

#include "my_rpg.h"
#include "menu_win.h"
#include "character.h"

int detect_credit(global *g, int mu_x, int mu_y)
{
    int xb = sfRectangleShape_getPosition(g->menu.button_menu[6]->button).x;
    int yb = sfRectangleShape_getPosition(g->menu.button_menu[6]->button).y;

    if (mu_x >= xb && mu_x <= (xb + 400) && mu_y >= yb && mu_y <= (yb + 100)
    && g->menu.visible == 3) {
        sfSound_play(g->music.sound);
        g->menu.visible = 2;
        sfSprite_setPosition(g->credit_spr, (sfVector2f){0, 300});
    }
}

int detect_menu_2(global *g, int mu_x, int mu_y)
{
    int xl = sfRectangleShape_getPosition(g->menu.button_menu[7]->button).x;
    int yl = sfRectangleShape_getPosition(g->menu.button_menu[7]->button).y;

    if (g->menu.visible == 3) {
        detect_credit(g, mu_x, mu_y);
    }
    if (mu_x >= xl && mu_x <= (xl + 400) && mu_y >= yl && mu_y <= (yl + 100)
    && g->menu.visible == 0) {
        sfSound_play(g->music.sound);
        sfRenderWindow_close(g->window);
    }
    if (g->menu.is_character_chosen == 1) {
        change_color_of_button_character(g);
    }
    if (g->menu.is_character_chosen == 1) {
        detect_perso(g);
    }
}

int detect_menu_start_2(global *g, int mu_x, int mu_y)
{
    int x_ho = sfRectangleShape_getPosition(g->menu.button_menu[20]->button).x;
    int y_ho = sfRectangleShape_getPosition(g->menu.button_menu[20]->button).y;

    if (g->menu.visible == 0) {
        if (mu_x >= x_ho && mu_x <= (x_ho + 400) && mu_y >= y_ho && mu_y <=
        (y_ho + 100) && g->screen == 0 && g->menu.visible == 0) {
            g->menu.visible = 6;
        }
    }
}

int detect_menu_start(global *g, int mu_x, int mu_y)
{
    int x = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).x;
    int y = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).y;
    int xp = sfRectangleShape_getPosition(g->menu.button_menu[1]->button).x;
    int yp = sfRectangleShape_getPosition(g->menu.button_menu[1]->button).y;

    if (mu_x >= x && mu_x <= (x + 400) && mu_y >= y && mu_y <= (y + 100)) {
        g->menu.visible = 2;
        sfSound_play(g->music.sound);
    }
    if (mu_x >= xp && mu_x <= (xp + 400) &&
    mu_y >= yp && mu_y <= (yp + 100)) {
        if (g->menu.is_character_chosen == 0) {
            sfSound_play(g->music.sound);
            g->menu.is_character_chosen = 1;
        } else {
            sfSound_play(g->music.sound);
        }
    }
    detect_menu_start_2(g, mu_x, mu_y);
}

int detect_menu(global *g)
{
    int mu_x = sfMouse_getPositionRenderWindow(g->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(g->window).y;

    if (g->menu.visible == 2 && g->screen == 0) {
        detect_option(g, mu_x, mu_y);
    } else if (g->menu.visible == 0) {
        detect_menu_start(g, mu_x, mu_y);
    }
    detect_menu_2(g, mu_x, mu_y);
    detect_menu_howto(g, mu_x, mu_y);
}
