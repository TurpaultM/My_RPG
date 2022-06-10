/*
** EPITECH PROJECT, 2022
** mouse_keyboard
** File description:
** change_colors_2
*/

#include "my_rpg.h"
#include "menu_win.h"

void verif_color_frame(global *global)
{
    if (global->framerates == 30) {
        sfRectangleShape_setFillColor(global->menu.button_menu[10]
        ->button, sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[10]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[11]
        ->button, sfRed);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[11]
        ->button, 1);
        sfRectangleShape_setFillColor(global->menu.button_menu[9]->button
        , sfGreen);
    } else {
        verif_color_frame_cont(global);
    }
}

void change_color_frame_2(global *global, int mu_x, int mu_y, sfColor sfGray)
{
    int x_90 = sfRectangleShape_getPosition(global->menu.button_menu[11]
    ->button).x;
    int y_90 = sfRectangleShape_getPosition(global->menu.button_menu[11]
    ->button).y;

    if (mu_x >= x_90 && mu_x <= (x_90 + 50) && mu_y >= y_90 && mu_y <=
    (y_90 + 50)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[11]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[11]
        ->button, 4);
    } else {
        verif_color_frame(global);
    }
}

void change_color_frame_cont(global *global, int mu_x, int mu_y,
sfColor sfGray)
{
    int x_60 = sfRectangleShape_getPosition(global->menu.button_menu[10]
    ->button).x;
    int y_60 = sfRectangleShape_getPosition(global->menu.button_menu[10]
    ->button).y;

    if (mu_x >= x_60 && mu_x <= (x_60 + 50) && mu_y >= y_60 && mu_y
    <= (y_60 + 50)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[10]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[10]
        ->button, 4);
    } else {
        change_color_frame_2(global, mu_x, mu_y, sfGray);
    }
}

void change_color_frame(global *global)
{
    int mu_x = sfMouse_getPositionRenderWindow(global->window).x;
    int mu_y = sfMouse_getPositionRenderWindow(global->window).y;
    int x_30 = sfRectangleShape_getPosition(global->menu.button_menu[9]
    ->button).x;
    int y_30 = sfRectangleShape_getPosition(global->menu.button_menu[9]
    ->button).y;
    sfColor sfGray = sfColor_fromRGBA(130, 130, 130, 80);

    if (mu_x >= x_30 && mu_x <= (x_30 + 50) && mu_y >= y_30 && mu_y <=
    (y_30 + 50)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[9]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[9]
        ->button, 4);
    } else {
        change_color_frame_cont(global, mu_x, mu_y, sfGray);
    }
}

void change_color_of_button2_2(global *g, int mu_x, int mu_y)
{
    sfColor sfGray = sfColor_fromRGB(150, 150, 150);

    for (int i = 0; i < 2; i++) {
        sfRectangleShape_setFillColor(g->menu.button_menu[i]->button,sfWhite);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[i]->button,
        1);
    }
    for (int i = 7; i < 8; i++) {
        sfRectangleShape_setFillColor(g->menu.button_menu[i]->button, sfWhite);
        sfRectangleShape_setOutlineThickness(g->menu.button_menu[i]->button,
        1);
    }
}
