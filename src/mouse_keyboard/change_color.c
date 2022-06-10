/*
** EPITECH PROJECT, 2022
** mous_keyboard
** File description:
** change_colors
*/

#include "my_rpg.h"
#include "menu_win.h"

void change_color_of_button3(global *g)
{
    int mx = sfMouse_getPositionRenderWindow(g->window).x;
    int my = sfMouse_getPositionRenderWindow(g->window).y;
    int xs = sfRectangleShape_getPosition(g->menu.button_menu[2]->button).x;
    int ys = sfRectangleShape_getPosition(g->menu.button_menu[2]->button).y;
    int xm = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).x;
    int ym = sfRectangleShape_getPosition(g->menu.button_menu[4]->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mx >= xs && mx <= (xs + 400) && my >= ys && my <= (ys + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[2]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[2]->button,
        4);
    } else if (mx >= xm && mx <= (xm + 400) && my >= ym
    && my <= (ym + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[4]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[4]->button,
        4);
    } else {
        change_color_of_button4(g, mx, my);
    }
}

void change_color_of_button2_222(global *g, int mx, int my, sfColor sfGray)
{
    sfRectangleShape_setFillColor(g->menu.button_menu[0]->button, sfWhite);
    sfRectangleShape_setFillColor(g->menu.button_menu[1]->button, sfWhite);
    sfRectangleShape_setFillColor(g->menu.button_menu[7]->button, sfWhite);
    sfRectangleShape_setFillColor(g->menu.button_menu[20]->button, sfWhite);
    sfRectangleShape_setOutlineThickness(g->menu.button_menu[0]->button,
    1);
    sfRectangleShape_setOutlineThickness(g->menu.button_menu[1]->button,
    1);
    sfRectangleShape_setOutlineThickness(g->menu.button_menu[7]->button,
    1);
    sfRectangleShape_setOutlineThickness(g->menu.button_menu[20]->button,
    1);
}

void change_color_of_button2_22(global *g, int mx, int my, sfColor sfGray)
{
    int xl = sfRectangleShape_getPosition(g->menu.button_menu[20]->button).x;
    int yl = sfRectangleShape_getPosition(g->menu.button_menu[20]->button).y;

    if (mx >= xl && mx <= (xl + 400) && my >= yl && my <= (yl + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[20]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[20]->button,
        4);
    } else {
        change_color_of_button2_222(g, mx, my, sfGray);
    }
}

void change_color_of_button2(global *g, int mx, int my, sfColor sfGray)
{
    int x = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).x;
    int y = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).y;
    int xl = sfRectangleShape_getPosition(g->menu.button_menu[7]->button).x;
    int yl = sfRectangleShape_getPosition(g->menu.button_menu[7]->button).y;

    if (mx >= x && mx <= (x + 400) && my >= y && my <= (y + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[0]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[0]->button,
        4);
    } else if (mx >= xl && mx <= (xl + 400) && my >= yl && my <= (yl + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[7]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[7]->button,
        4);
    } else {
        change_color_of_button2_22(g, mx, my, sfGray);
    }
}

void change_color_of_button(global *g)
{
    int x = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).x;
    int y = sfRectangleShape_getPosition(g->menu.button_menu[0]->button).y;
    int x_l = sfRectangleShape_getPosition(g->menu.button_menu[1]->button).x;
    int y_l = sfRectangleShape_getPosition(g->menu.button_menu[1]->button).y;
    int mx = sfMouse_getPositionRenderWindow(g->window).x;
    int my = sfMouse_getPositionRenderWindow(g->window).y;
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    if (mx >= x && mx <= (x + 400) && my >= y && my <= (y + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[0]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[0]->button,
        4);
    }
    if (mx >= x_l && mx <= (x_l + 400) && my >= y_l && my <= (y_l + 100)) {
        sfRectangleShape_setFillColor(g->menu.button_menu[1]->button, sfGray);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[1]->button,
        4);
    } else
        change_color_of_button2(g, mx, my, sfGray);
}
