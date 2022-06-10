/*
** EPITECH PROJECT, 2022
** mouse_key
** File description:
** detect perso 3
*/

#include "my_rpg.h"

void change_color_of_button_character3_cont(global *global, int mu_x,
int mu_y, sfColor sfGray)
{
    int x_man2 = sfRectangleShape_getPosition(global->menu.button_menu[18]
    ->button).x;
    int y_man2 = sfRectangleShape_getPosition(global->menu.button_menu[18]
    ->button).y;

    if (mu_x >= x_man2 && mu_x <= (x_man2 + 200) && mu_y >= y_man2
    && mu_y <= (y_man2 + 200)) {
        sfRectangleShape_setFillColor(global->menu.button_menu[18]->button,
        sfGray);
        sfRectangleShape_setOutlineThickness(global->menu.button_menu[18]
        ->button, 4);
    } else {
        for (int i = 13; i < 19; i++) {
            sfRectangleShape_setFillColor(global->menu.button_menu[i]->button,
            sfTransparent);
            sfRectangleShape_setOutlineThickness(global->menu.button_menu[i]
            ->button, 1);
        }
    }
}
